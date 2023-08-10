document.addEventListener('DOMContentLoaded', function () {
    var ros_joy = new ROSLIB.Ros({
        url: 'ws://localhost:9090'
    });

    var joy = new ROSLIB.Topic({
        ros: ros_joy,
        name: '/joy',
        messageType: 'sensor_msgs/Joy'
    });

    // 這個函數用於增加或減少滾動條的位置
    function adjustScrollBarPosition(delta) {
        const container = document.querySelector('#carousel_container');
        container.scrollLeft += delta;
        adjustPanoramaRotation();
        resetRotateAndScroll();
    }

    function adjustPanoramaRotation() {
        const container = document.querySelector('#carousel_container');
        const panorama = document.querySelector('#panorama_view');

        const scrolledPercentage = (container.scrollLeft / (container.scrollWidth - container.offsetWidth)) * 100;

        // 计算基于滚动百分比的旋转值，并减去180度使其中心对齐
        const rotateValue = (scrolledPercentage * 5.4);
        panorama.style.transform = `rotate(${rotateValue}deg)`;

    }

    function resetRotateAndScroll() {
        const container = document.querySelector('#carousel_container');
        const panorama = document.querySelector('#panorama_view');
        let transformValue = panorama.style.transform;

        let match = /rotate\((-?\d+(?:\.\d+)?)deg\)/.exec(transformValue);

        let rotateValue = match ? match[1] : null;  // rotateValue now contains the rotation in degrees, or null if not found



        if (rotateValue >= 540) {


            // 设定目标旋转值
            const targetRotate = 180;

            // 计算滚动的百分比，这是旋转值与滚动的关系
            const scrollPercentage = targetRotate / 5.4;  // 修改点1
            const targetScrollLeft = (scrollPercentage / 100) * (container.scrollWidth * 0.98 - container.offsetWidth * 1.52);

            // 逆向计算对应的scrollLeft值
            container.scrollLeft = targetScrollLeft;
            panorama.style.transform = `rotate(${targetRotate}deg)`;
        }
        if (rotateValue <= 0) {


            // 设定目标旋转值
            const targetRotate = 360;

            // 计算滚动的百分比，这是旋转值与滚动的关系
            const scrollPercentage = targetRotate / 5.4;  // 修改点1
            panorama.style.transform = `rotate(${targetRotate}deg)`;
            const targetScrollLeft = (scrollPercentage / 100) * (container.scrollWidth - container.offsetWidth);
            container.scrollLeft = targetScrollLeft;

        }
    }



    joy.subscribe(function (message) {
        // 假設message.axes[3]是我們需要的數據，其值範圍為 -1 到 1
        // 使用這個值來調整滾動速度
        // 例如，每次接收到的值可以增加或減少10像素的滾動，你可以根據需要調整這個值
        const scrollSpeed = 10;  // 滾動速度，每次滾動的像素數
        adjustScrollBarPosition(-message.axes[3] * scrollSpeed);
    });




});