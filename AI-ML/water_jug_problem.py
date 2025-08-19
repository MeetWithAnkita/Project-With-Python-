from collections import defaultdict

def waterJugSolver(amt1, amt2, jug1, jug2, aim, visited):
    # Print the current state and check the stopping condition
    if (amt1, amt2) in visited:
        return False
    
    print(amt1, amt2)
    if amt1 == aim or amt2 == aim:
        return True
    
    visited.add((amt1, amt2))
    
    # Explore all possible moves recursively in the correct order
    return (waterJugSolver(0, amt2, jug1, jug2, aim, visited) or  # Empty Jug 1
            waterJugSolver(amt1, 0, jug1, jug2, aim, visited) or  # Empty Jug 2
            waterJugSolver(jug1, amt2, jug1, jug2, aim, visited) or  # Fill Jug 1
            waterJugSolver(amt1, jug2, jug1, jug2, aim, visited) or  # Fill Jug 2
            waterJugSolver(amt1 - min(amt1, jug2 - amt2), amt2 + min(amt1, jug2 - amt2), jug1, jug2, aim, visited) or  # Pour Jug 1 -> Jug 2
            waterJugSolver(amt1 + min(amt2, jug1 - amt1), amt2 - min(amt2, jug1 - amt1), jug1, jug2, aim, visited))  # Pour Jug 2 -> Jug 1

# Input values
jug1 = int(input("Enter the capacity of Jug1: "))
jug2 = int(input("Enter the capacity of Jug2: "))
aim = int(input("Enter the amount of water to be measured: "))

# Visited states to avoid redundant checks
visited = set()

# Solve the problem starting from (0, 0)
print("Steps:")
if not waterJugSolver(0, 0, jug1, jug2, aim, visited):
    print("No solution possible.")
