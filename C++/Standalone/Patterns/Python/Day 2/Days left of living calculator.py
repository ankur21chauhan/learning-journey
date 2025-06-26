#if the age is fixed to live
age=float(input("Enter your current age = "))
age_int=int(age)
years_remaining=55-age_int    
months_remaining=years_remaining*12
weeks_remaining=52*years_remaining
days_remaining=365*years_remaining
hours_remaining=years_remaining*8760
minutes_remaining=525600*years_remaining
seconds_remaining=3154000000*years_remaining

message=(f"Your have {years_remaining} years, {months_remaining} months,{weeks_remaining}  weeks {days_remaining} days, {hours_remaining} hours, {minutes_remaining} minutes and {seconds_remaining} seconds left")
print(message)