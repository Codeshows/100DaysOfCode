# Working with timedelta objects
from datetime import date
from datetime import datetime
from datetime import timedelta

print(timedelta(days=60, hours=4, minutes=21, seconds=17))

# today's date
now = datetime.now()
print("Today is:\n" + str(now))

# after a year
print("After 1 year:\n" + str(now + timedelta(days=365)))

# after 2 days 3 weeks
print("After 2 days and :\n" + str(now + timedelta(days=2, weeks=3)))

# 1week ago
t = datetime.now() - timedelta(weeks=1)
s = t.strftime("%A %B %d, %Y")
print("A week ago: " + s)

# How many days until Jan 01
today = date.today()
nov = date(today.year, 11, 6)

# If for this date has already occurred before today
if nov < today:
    print("6th Nov has went by %d days ago" % (today - nov).days)
    nov = nov.replace(year=today.year + 1)

# Now calculating for the next year's 6th Nov
time_to_nov = nov - today
print("It's just", time_to_nov.days, "days until next 6th Nov.")

#