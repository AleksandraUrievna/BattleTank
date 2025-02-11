# Battle Tank

Игра представляет собой открытый танковый бой с простыми ИИ, низкополигональным ландшафтом и продвинутой системой управления в Unreal Engine 4 созданной с помощью С++ и Blueprint.

![Tank1](https://user-images.githubusercontent.com/65093579/85614074-3676e300-b663-11ea-9e23-8036395273f4.png)

1)В игре присутствуют танки с ИИ которые пытаются разрушить танк игрока, как только тот появляется в поле зрения противника. Танк ИИ прицеливается с помощью поворота башни со стволом и выпускает снаряды (количество снарядов, скорость запуска и время перезарядки можно настроить в блупринте танка).

![Танк2](https://user-images.githubusercontent.com/65093579/85614216-5a3a2900-b663-11ea-8a0f-6d4c42fe13d8.png)

2)Также танки-противники преследуют танк игрока благодаря настоенной в С++ системе управления ИИ которая реализована с помощью скалярного произведения векторов текущего направления танка-противника и вектора местонахождения танка игрока.

![Screenshot_2](https://user-images.githubusercontent.com/65093579/85614270-64f4be00-b663-11ea-9acb-288a47131a89.png)

3)В игре есть неподвижные противники-авто минометы, выставленные на горках, их невозможно разрушить, но у них есть лимит боеприпасов.

![Танк2_2](https://user-images.githubusercontent.com/65093579/85614328-74740700-b663-11ea-9dca-6705959c79e6.png)

4)Над танками прикреплен компонент - индикатор прогресса здоровья (значение стартового здоровья настраивается в блупринте танка, уровень урона снаряда настроен в С++). Как только здоровье становится равно 0 -> прекращается контроль танка.

![Танк3](https://user-images.githubusercontent.com/65093579/85614386-82c22300-b663-11ea-94a9-eb6a6b37d377.png)

5)Есть точка прицеливания, которая меняет цвет-статус в зависимости от того происходит перезарядка(красный), прицеливание(зеленый) или блокировка(желтый).

![Screenshot_1](https://user-images.githubusercontent.com/65093579/85614476-98374d00-b663-11ea-9dc6-3563e5358f69.png)

6)Управление танком с помощью клавиш W,S,A,D. Переключение камеры от первого лица и от третьего лица с помощью клавиши E.

![Танк4_2](https://user-images.githubusercontent.com/65093579/85614531-a5543c00-b663-11ea-92d0-d97c262cdf17.png)

7)Работа с частицами при выстреле снаряда и при достижении цели, а также есть след дыма с задержкой.

![Танк5_5](https://user-images.githubusercontent.com/65093579/85614620-bbfa9300-b663-11ea-9199-1cdb74374505.png)
![Танк6_2](https://user-images.githubusercontent.com/65093579/85614637-bf8e1a00-b663-11ea-99c5-c385f2e5c373.png)

8)Базово настроен ландшафт, добавлены деревья, базово настроено освещение, подобраны текстуры и материалы для игры.

![Танк7](https://user-images.githubusercontent.com/65093579/85614675-cae14580-b663-11ea-9c27-e8538e4549c6.png)
