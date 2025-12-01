# Imports
from decimal import *
getcontext().prec = 28  # Increased precision for better accuracy

# Mortgage calculator
try:
    
    def monthlyMortgagePayment(yearlyInterest, totalPayments):
        
        def principle():
            while True:  # Keep asking until valid input
                try:
                    principle_input = input("Principal amount: $")
                    
                    # Check if input has k or m suffix
                    if principle_input.lower().endswith('k') or principle_input.lower().endswith('m'):
                        modifier = principle_input[-1].lower()
                        principle_value = Decimal(principle_input[:-1])
                        
                        if modifier == "k":
                            principle_value = principle_value * Decimal(1000)
                        elif modifier == "m":
                            principle_value = principle_value * Decimal(1000000)
                        else:
                            print("Unrecognised suffix! Use 'k' for thousands or 'm' for millions.")
                            continue
                            
                    else:
                        principle_value = Decimal(principle_input)
                    
                    if principle_value <= 0:
                        print("Principal must be greater than 0!")
                        continue
                        
                    print(f"Principal: ${principle_value:,.2f}")
                    return principle_value
                    
                except (ValueError, InvalidOperation):
                    print("Please enter a valid number!")
                    continue

        # Get principal from user input
        P = principle()
        
        # Convert yearly interest to monthly and decimal format
        r = Decimal(str(yearlyInterest)) / Decimal(12)
        n = Decimal(totalPayments)
        
        # Handle zero interest case
        if r == 0:
            monthlyPayment = P / n
        else:
            # Calculate monthly payment using amortization formula
            compound_factor = (Decimal(1) + r) ** n
            monthlyPayment = P * (r * compound_factor) / (compound_factor - Decimal(1))

        print(f"\nMortgage Details:")
        print(f"Principal: ${P:,.2f}")
        print(f"Yearly Interest Rate: {Decimal(str(yearlyInterest)) * 100:.2f}%")
        print(f"Monthly Interest Rate: {r * 100:.4f}%")
        print(f"Loan Term: {int(totalPayments)} payments ({int(totalPayments/12)} years)")
        print(f"Monthly Payment: ${monthlyPayment:.2f}")
        print(f"Total Amount Paid: ${monthlyPayment * n:,.2f}")
        print(f"Total Interest Paid: ${(monthlyPayment * n) - P:,.2f}")
        
        return monthlyPayment

    # Interactive calculator
    def runCalculator():
        print("=== Mortgage Calculator ===")
        
        while True:
            try:
                # Get yearly interest rate
                yearly_rate = input("\nYearly interest rate (e.g., 0.05 for 5%): ")
                yearly_rate = float(yearly_rate)
                if yearly_rate < 0 or yearly_rate > 1:
                    print("Interest rate should be between 0 and 1 (e.g., 0.05 for 5%)")
                    continue
                break
            except ValueError:
                print("Please enter a valid interest rate!")
        
        while True:
            try:
                # Get loan term
                years = input("Loan term in years (e.g., 30): ")
                years = int(years)
                if years <= 0:
                    print("Loan term must be greater than 0!")
                    continue
                total_payments = years * 12
                break
            except ValueError:
                print("Please enter a valid number of years!")
        
        # Calculate monthly payment
        monthlyMortgagePayment(yearly_rate, total_payments)
        
        # Ask if user wants to calculate another mortgage
        again = input("\nCalculate another mortgage? (y/n): ").lower().strip()
        if again.startswith('y'):
            runCalculator()

    # Run the calculator
    runCalculator()

except KeyboardInterrupt:
    print("\n\nCalculation interrupted by user.")
except Exception as e:
    print(f"An error occurred: {e}")
finally:
    print("\nThanks for using the mortgage calculator!")