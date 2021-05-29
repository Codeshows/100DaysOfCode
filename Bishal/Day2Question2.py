# Working with Calenders
import calendar

# Plain text calender
c = calendar.TextCalendar(calendar.MONDAY)
st = c.formatmonth(2017, 1, 0, 0)
print(st)

