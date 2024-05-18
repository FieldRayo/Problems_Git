import inquirer
import os

executables = [x for x in os.listdir('Programacion2') if not x.count('.')]

questions = [
    inquirer.List('exe', message='Select the program', choices=executables),
]

answers = inquirer.prompt(questions)

os.system(f'Programacion2/{answers["exe"]}')
