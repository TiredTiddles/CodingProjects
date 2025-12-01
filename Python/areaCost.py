# Import
import decimal

# Essential functions
def d(number):
    return decimal.Decimal(str(number))

# Global variable to store cost
cost = d(0)  # Initialize cost

# Area formulas
def triangle():
    base = d(input("Base size (in metres): "))
    height = d(input("Height size (in metres): "))  # Fixed: was "Base size"
    area = d(0.5) * base * height  # Removed redundant d() calls
    
    total_cost = area * cost
    print(f"Triangle area: {area} m²")
    print(f"Total cost: ${total_cost}")

def rectangle():
    length = d(input("Length (in metres): "))  # Better variable name
    width = d(input("Width (in metres): "))    # Fixed: was "Base size" 
    area = length * width  # Removed redundant d() calls
    
    total_cost = area * cost
    print(f"Rectangle area: {area} m²")
    print(f"Total cost: ${total_cost}")

def pentagon():
    print("Pentagon calculation not implemented yet")

def hexagon():
    print("Hexagon calculation not implemented yet")

def circle():
    radius = d(input("Radius (in metres): "))
    area = d('3.14159') * radius * radius
    
    total_cost = area * cost
    print(f"Circle area: {area} m²")
    print(f"Total cost: ${total_cost}")

def show_help():  # Renamed from 'help' to avoid conflict with built-in help()
    print("Available commands: ")
    for cmd, info in commands.items():
        if cmd != "help":  # Don't show help command in the list
            print(f"  {cmd}: {info['description']}")

# Dictionary mapping
commands = {
    "triangle": {
        "function": triangle,
        "description": "calculate cost of triangle shaped floor"
    },
    "rectangle": {
        "function": rectangle,
        "description": "calculate cost of rectangle shaped floor"  # Fixed description
    },
    "pentagon": {
        "function": pentagon,
        "description": "calculate cost of pentagon shaped floor"  # Fixed description
    },
    "hexagon": {
        "function": hexagon,
        "description": "calculate cost of hexagon shaped floor"  # Fixed description
    },
    "circle": {
        "function": circle,
        "description": "calculate cost of circle shaped floor"  # Fixed description
    },
    "help": {
        "function": help,  # Changed to show_help
        "description": "show available commands"
    }
}

# Main
def main():
    global cost
    print("=== Floor Cost Calculator ===")
    
    # Get cost once at the beginning
    cost = d(input("Enter cost per square meter: $"))
    print(f"Cost set to ${cost} per m²\n")
    
    while True:
        user_input = input("Enter command (or 'quit' to exit): ").lower().strip()
        
        if user_input == 'quit':
            print("Goodbye!")
            break
        elif user_input in commands:
            try:
                commands[user_input]["function"]()
            except Exception as e:
                print(f"Error: {e}")
        else:
            print("Unknown command! Type 'help' for available commands.")

if __name__ == "__main__":
    main()