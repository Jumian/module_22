## Задача ##
#### Цели домашнего задания ####
- Приобрести навыки работы с std::map.
- Научиться вставлять, удалять и искать элементы.
- Научиться использовать итераторы для прямого прохода по контейнеру.


#### Что входит в задание #### 
- Написать программу «Телефонный справочник».
- Написать программу «Регистратура».
- Написать функцию, которая выводит анаграмму.


### Задание 1. Телефонный справочник ###


#### Что нужно сделать ####

Напишите программу «Телефонный справочник».

На вход программе поступают запросы трёх типов:

69-70-30 Ivanov — добавить телефон и фамилию абонента в справочник

69-70-30 — узнать фамилию абонента по номеру телефона

Ivanov — узнать телефон абонента по фамилии



Необходимо выводить в консоль ответ на запросы 2 и 3. Обратите внимание, что абоненты по разным номерам могут иметь одинаковые фамилии. В таком случае на запрос 3 необходимо выдать все номера через пробелы.

Операции запросов должны работать за O(logn) или O(logn × количество номеров с этой фамилией).



#### Чек-лист для проверки задачи #### 

Программа корректно выводит фамилии и списки номеров.
Программа использует только заголовочные файлы <iostream>, <string>, <map> и, возможно, вектор.


#### Как отправить задание на проверку ####

Пришлите ссылку на repl.it или файл .срр с решением через форму для сдачи домашнего задания.





### Задание 2. Регистратура ###


#### Что нужно сделать #### 

Напишите программу «Регистратура».

На вход программе приходят строки с фамилиями или строка Next. Пришедшие люди становятся в очередь, а по запросу Next необходимо вызвать в регистратуру человека с фамилией, идущей первой в лексикографическом порядке (по алфавиту), и вывести его фамилию на экран. Фамилии пациентов могут повторяться.

Каждый запрос (на добавление и вывод) должен работать за O(logn).



#### Пример: ####

← Sidorov

← Ivanov

← Ivanov

← Petrov

← Next

→ Ivanov

← Next

→ Ivanov

← Next

→ Petrov



#### Чек-лист для проверки задачи #### 

Программа корректно выводит фамилии в лексикографическом порядке.
Программа использует только заголовочные файлы <iostream>, <string>, <map>.


#### Как отправить задание на проверку ####

Пришлите ссылку на repl.it или файл .срр с решением через форму для сдачи домашнего задания.



### Задание 3. Анаграммы ### 


#### Что нужно сделать ####

Напишите функцию, которая принимает две строки и возвращает true, если первая строка является анаграммой второй (то есть можно получить первую строку из второй путём перестановки букв местами), и false иначе. Для достижения хорошей асимптотики решения рекомендуется использовать std::map.

Пример анаграммы: лекарство — стекловар



#### Чек-лист для проверки задачи #### 

- Функция принимает корректные типы данных, тип возвращаемого значения — bool.
- Функция не использует библиотек, кроме <iostream>, <map>, <string>.
- Функция корректно определяет, являются ли строки анаграммами.


#### Как отправить задание на проверку #### 

Пришлите ссылку на repl.it или файл .срр с решением через форму для сдачи домашнего задания.