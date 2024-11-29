def get_answer(question_number):
    answers = {
        1: 'B',
        2: 'C',
        3: 'B',
        4: '2550',
        5: '2.38',
        6: 'C',
        7: 'B',
        8: 'D',
        9: 'A',
        10: 'B'
    }
    
    if question_number > 10:
        return "Wrong"
    return answers.get(question_number, "Wrong")

# 输入处理
question_number = int(input().strip())
print(get_answer(question_number))
