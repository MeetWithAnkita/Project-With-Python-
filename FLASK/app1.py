from flask import Flask, request, jsonify
from datetime import datetime

app = Flask(__name__)

# Mock databases (in memory)
users = []
doctors = [
    {
        "id": 1,
        "name": "Dr. Sen",
        "specialization": "Cardiologist",
        "contact": "9876543210",
        "location": "Apollo Hospital",
        "available_slots": ["2025-08-18 15:00", "2025-08-18 16:00"]
    },
    {
        "id": 2,
        "name": "Dr. Roy",
        "specialization": "Dermatologist",
        "contact": "9876501234",
        "location": "Fortis Clinic",
        "available_slots": ["2025-08-19 10:00", "2025-08-19 11:30"]
    }
]
appointments = []

# User Registration
@app.route('/register', methods=['POST'])
def register():
    data = request.json
    user = {
        "id": len(users) + 1,
        "name": data.get("name"),
        "facial_data": data.get("facial_data", None)  # optional
    }
    users.append(user)
    return jsonify({"message": "User registered successfully", "user": user})

# Get list of doctors
@app.route('/doctors', methods=['GET'])
def get_doctors():
    return jsonify(doctors)

# Book Appointment
@app.route('/book', methods=['POST'])
def book_appointment():
    data = request.json
    user_id = data.get("user_id")
    doctor_id = data.get("doctor_id")
    slot = data.get("slot")

    # Validate user
    user = next((u for u in users if u["id"] == user_id), None)
    if not user:
        return jsonify({"error": "User not found"}), 404

    # Validate doctor and slot
    doctor = next((d for d in doctors if d["id"] == doctor_id), None)
    if not doctor:
        return jsonify({"error": "Doctor not found"}), 404

    if slot not in doctor["available_slots"]:
        return jsonify({"error": "Slot not available"}), 400

    # Book appointment
    appointment = {
        "id": len(appointments) + 1,
        "user": user,
        "doctor": doctor["name"],
        "location": doctor["location"],
        "slot": slot
    }
    appointments.append(appointment)
    doctor["available_slots"].remove(slot)  # remove booked slot

    return jsonify({"message": "Appointment booked successfully", "appointment": appointment})

# Get all appointments
@app.route('/appointments', methods=['GET'])
def get_appointments():
    return jsonify(appointments)

if __name__ == '__main__':
    app.run(debug=True)