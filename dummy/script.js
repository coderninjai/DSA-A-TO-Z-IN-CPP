let tasks = JSON.parse(localStorage.getItem("tasks")) || [];

const taskList = document.getElementById("taskList");

function saveTasks() {
    localStorage.setItem("tasks", JSON.stringify(tasks));
}

function renderTasks() {
    taskList.innerHTML = "";

    tasks.forEach((task, index) => {
        let li = document.createElement("li");

        li.innerHTML = `
            <span class="${task.done ? 'completed' : ''}" 
                  onclick="toggleTask(${index})">
                ${task.text}
            </span>
            <button onclick="deleteTask(${index})">❌</button>
        `;

        taskList.appendChild(li);
    });

    updateChart();
}

function addTask() {
    const input = document.getElementById("taskInput");
    if (input.value.trim() === "") return;

    tasks.push({ text: input.value, done: false });
    input.value = "";

    saveTasks();
    renderTasks();
}

function toggleTask(index) {
    tasks[index].done = !tasks[index].done;
    saveTasks();
    renderTasks();
}

function deleteTask(index) {
    tasks.splice(index, 1);
    saveTasks();
    renderTasks();
}

let chart;

function updateChart() {
    const completed = tasks.filter(t => t.done).length;
    const pending = tasks.length - completed;

    const data = {
        labels: ["Completed", "Pending"],
        datasets: [{
            data: [completed, pending],
            backgroundColor: ["#22c55e", "#ef4444"]
        }]
    };

    if (chart) chart.destroy();

    chart = new Chart(document.getElementById("taskChart"), {
        type: "doughnut",
        data: data
    });
}

renderTasks();