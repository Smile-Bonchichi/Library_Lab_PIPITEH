from datetime import datetime
from datetime import date
from datetime import timedelta
from dateutil.relativedelta import relativedelta


def to_date(x):
    year = int(x / 10000)
    month = int((x % 10000) / 100)
    day = int(x % 100)
    return date(year, month, day)


print(to_date(19901204))
##########################
date2 = datetime(2001, 14, 4)
print(date2)

##########################
str_date = '20011404'

date3 = datetime.strptime(str_date, "%Y%m%d")
print(date3)
##########################
week_days = {0: 'Monday ', 1: 'Tuesday ', 2: 'Wednesday ', 3: 'Thursday ', 4: 'Friday ', 5: 'Saturday ', 6: 'Sunday '}

date4 = datetime.now() + relativedelta(months=-1) - relativedelta(years=-1)
print(date4, '-', week_days[date4.today().weekday()])
############################
month_days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
day = int(input("Enter day: "))
for i in range(12):
    if day <= month_days[i]:
        print('Число месяца: ', i + 1)
        print('День месяца: ', day)
        break
    day -= month_days[i]
###########################
day = datetime.now().day
month = datetime.now().month
year_day = day
for i in range(month - 1):
    year_day += month_days[i]
print('Day of the year:', year_day)
###########################
answer_date = input('Введите формат даты: ')
d = int(answer_date.split('.')[0])
m = int(answer_date.split('.')[1])
y = int(answer_date.split('.')[2])
date6 = datetime(y, m, d)
print(date6.strftime("%B %e, %y"))