grade_a = float(input())
grade_b = float(input())
grade_c = float(input())
media = ((grade_a * 2) + (grade_b * 3) + (grade_c * 5)) / 10
formatted_number = format(media, '.1f')

print('MEDIA =', formatted_number)