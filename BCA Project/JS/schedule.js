// Event Data Array
const events = [
    {
        title: "🎉 Music Concert",
        date: "25th Dec 2024",
        time: "5:00 PM - 9:00 PM",
        venue: "City Auditorium",
        description: "Join us for an evening of music, food, and fun!",
        image: "../media/home.jpeg"
    },
    {
        title: "🎭 Theater Night",
        date: "27th Dec 2024",
        time: "7:00 PM - 10:00 PM",
        venue: "Grand Theater",
        description: "Experience  the  magic  of  live  theater!",
        image: "../media/home.jpeg"
    },
    {
        title: "🍴 Food Festival",
        date: "30th Dec 2024",
        time: "10:00 AM - 8:00 PM",
        venue: "City Park",
        description: "Enjoy delicious cuisines from around the world!",
        image: "../media/home.jpeg"
    },
    {
        title: "🍴 Food Festival",
        date: "30th Dec 2024",
        time: "10:00 AM - 8:00 PM",
        venue: "City Park",
        description: "Enjoy delicious cuisines from around the world!",
        image: "../media/home.jpeg"
    },
    {
        title: "🍴 Food Festival",
        date: "30th Dec 2024",
        time: "10:00 AM - 8:00 PM",
        venue: "City Park",
        description: "Enjoy delicious cuisines from around the world!",
        image: "../media/home.jpeg"
    },
    {
        title: "🍴 Food Festival",
        date: "30th Dec 2024",
        time: "10:00 AM - 8:00 PM",
        venue: "City Park",
        description: "Enjoy delicious cuisines from around the world!",
        image: "../media/home.jpeg"
    },
    {
        title: "🍴 Food Festival",
        date: "30th Dec 2024",
        time: "10:00 AM - 8:00 PM",
        venue: "City Park",
        description: "Enjoy delicious cuisines from around the world!",
        image: "../media/home.jpeg"
    },
    {
        title: "🍴 Food Festival",
        date: "30th Dec 2024",
        time: "10:00 AM - 8:00 PM",
        venue: "City Park",
        description: "Enjoy delicious cuisines from around the world!",
        image: "../media/home.jpeg"  

    }

];

const cardContainer = document.getElementById("cardContainer");

// Function to Dynamically Generate Cards
events.forEach(event => {
    const card = document.createElement("div");
    card.className = "cards";
    card.innerHTML = `
        <img src="${event.image}" alt="Event Image" class="event-image">
        <h2>${event.title}</h2>
        <p>📅 <strong>Date:</strong> ${event.date}</p>
        <p>🕒 <strong>Time:</strong> ${event.time}</p>
        <p>📍 <strong>Venue:</strong> ${event.venue}</p>
        <p class="description">${event.description}</p>
        <div class="card-buttons">
            <button class="register-btn" onclick="registerEvent('${event.title}')">Register Now</button>
            <button class="details-btn" onclick="viewDetails('${event.title}')">View Details</button>
        </div>
    `;
    cardContainer.appendChild(card);
});

// Button Functions
function registerEvent(eventName) {
    alert(`You have successfully registered for "${eventName}"!`);
}

function viewDetails(eventName) {
    alert(`Viewing details for "${eventName}". Stay tuned for more updates!`);
}