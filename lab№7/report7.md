<p align="center">
МИНИСТЕРСТВО НАУКИ  И ВЫСШЕГО ОБРАЗОВАНИЯ РОССИЙСКОЙ ФЕДЕРАЦИИ<br/>
Федеральное государственное автономное образовательное учреждение высшего образования <br/> 
"КРЫМСКИЙ ФЕДЕРАЛЬНЫЙ УНИВЕРСИТЕТ им. В. И. ВЕРНАДСКОГО"  <br/>
ФИЗИКО-ТЕХНИЧЕСКИЙ ИНСТИТУТ  <br/>
Кафедра компьютерной инженерии и моделирования
<br/><br/><br/>
</p>
<h3>
<p align="center">
Отчёт по лабораторной работе № 7<br/> по дисциплине "Программирование"
</p>
</h3> 
<br/><br/>
студентки 1 курса группы "ИВТ-б-о-191(2)"  
<br/>Селезневой Анны Владимировны
<br/>направления подготовки 09.03.01 "Информатика и вычислительная техника" 
<br/><br/><br/>
<table>
<tr><td>Научный руководитель<br/> старший преподаватель кафедры<br/> компьютерной инженерии и моделирования</td>
<td>(оценка)</td>
<td>Чабанов В.В.</td>
</tr>
</table>
<br/><br/>
<p align="center">
Симферополь, 2020
</p>

<br/>

---

<br/>

#### Цель

* изучить основные возможности создания и отладки программ в IDE Qt Creator.

<br/>

---

<br/>

#### Ход работы
1. **Как создать консольное приложение С++ в IDE Qt Creator без использования компонентов Qt?**

    * Нужно открыть `Файл` меню и выбрать `Создать файл или проект`;
    * В появившемся окне выбираем `Проект без Qt`;
    * Выбираем `Приложение на языке C++` (рис. 1). 
    
    <p align="center">
    <img src="img/img1.png"><br/>
    <i>(рис. 1)</i>
    </p>

2. **Как изменить цветовую схему (оформление) среды?**

    * Нужно открыть `Инструменты` меню и выбрать `Параметры`;
    * В открывшемся окне выбрать `Среда`;
    * В вкладке `Интерфейс` выбрать подходящее оформление (рис. 2).
    
    <p align="center">
    <img src="img/img2.png"><br/>
    <i>(рис. 2)</i>
    </p>
    
3. **Как закомментировать/раскомментировать блок кода средствами Qt Creator?**
    
    * Для комментирования/раскомментирования нужно воспользоваться комбинацией `Ctrl + /`.

4. **Как открыть в проводнике папку с проектом средствами Qt Creator?**
    
    * Открыть меню проекта слева. 
    * В контекстном меню интерисующего вас файла выбрать `Открыть каталог файла` (рис. 3).
   
    <p align="center">
    <img src="img/img3.png"><br/>
    <i>(рис. 3)</i>
    </p>
   
5. **Какое расширение файла-проекта используется Qt Creator?**
    
    Расширение файла-проекта .pro.
    
6. **Как запустить код без отладки?**

    Для этого в левом нижнем иглу нужно выбрать кнопку `Запустить` (рис. 4)
    
    <p align="center">
    <img src="img/img4.png"><br/>
    <i>(рис. 4)</i>
    </p>
   
7. **Как запустить код в режиме отладки?**

    Для этого в левом нижнем иглу нужно выбрать кнопку `Запуск отладки` (рис. 4)
    
8. **Как установить/убрать точку останова (breakpoint)?**

    Нажать справа от номера соответсвующей строки. В результате установится/уберется красная точка останова (рис.5).
    
    <p align="center">
    <img src="img/img5.png"><br/>
    <i>(рис. 5)</i>
    </p>

9. 
    * **Какое значение содержит переменная i в 5й строке?**
    
        Переменная i содержит значение `32767`.
        
    * **Какое значение содержит переменная d в 6й строке?**
    
        Переменная d содержит значение `0`.
        
    * **Какие значение содержатся в переменных i и  d в 7й строке?**
    
        Переменная d содержит значение `5`. Переменная i содержит значение `5`.
        
    * **Совпадают ли эти значения с теми, что вы получали в MSVS для соответствующих типов?**
    
        До присваивания значения не совпадают, так как они содержат случайный мусор.
        После присваивания значения совпадают.

10. Закройте проект и перейдите на вкладку «Начало» => «Примеры»;
11. Выберите проект «Calculator Form Example». Для этого можно воспользоваться строкой поиска;
12. Изучите (по желанию) описание проекта в открывшемся окне;
13. Сейчас вы находитесь на вкладке «Проекты». Выберите комплект сборки. На рис. 6 присутствует только один комплект, но их может быть больше, например для сборки под Android или компилятором MSVS;
    
    <p align="center">
    <img src="img/img6.png"><br/>
    <i>(рис. 6)</i>
    </p>

14. Перейдите на вкладку «Редактор» и запустите сборку проекта;
15. В инспекторе проекта выберите файл «main.cpp». В этом файле установите курсор на слово «show» в строке calculator.show(); и нажмите F1. Изучите справочную информацию. Таким же образом можно получить справку по любому объекту/методу/полю доступному в Qt;
   
   <p align="center">
   <img src="img/img7.png"><br/>
   <i>(рис. 7)</i>
   </p>
   
16. В инспекторе проекта выберите файл «Формы» => «calculatorform.ui» и дважды счёлкните ЛКМ;
17. Вы попали на вкладку «Дизайн». На форме замените английский текст на русский. Пересоберите проект. (рис. 8)
    
    <p align="center">
    <img src="img/img8.png"><br/>
    <i>(рис. 8)</i>
    </p>

<br/>

---

<br/>

#### Ввывод

в ходе лабораторной работы были получены такие навыки, как
* создавать приложения в среде Qt Creator;
* настраивать внешний вид среды;
* комментировать строки;
* запускать код в разных режимах;
* редактировать формы интерфейса.
