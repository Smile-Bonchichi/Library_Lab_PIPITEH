package com.example.recipe;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.support.v7.widget.GridLayoutManager;
import android.support.v7.widget.RecyclerView;

import java.util.ArrayList;
import java.util.List;

public class MainActivity extends AppCompatActivity {

    RecyclerView myrecyclerView;
    RecyclerViewAdapter myAdapter;

    List<Recipes> recipes1;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        recipes1 = new ArrayList<>();

        recipes1.add(new Recipes("«Натюрморт с голубой скатертью»","Анри Матисс",
               "Описание картины",
                "Яркие контрасты, изумительно сочные краски, ритмичный восточный орнамент ткани – все это призвано пробудить у зрителя чувство насыщенности жизни. В нелегкие времена, когда пришлось творить живописцу, общество особенно нуждалось в новой радости, надежде и отдыхе от всего мрачного, гнетущего, пугающего. Такими спасительными средствами оказались натюрморты Матисса.\n" +
                        "\n" +
                        "«Натюрморт с голубой скатертью» дарит состояние безмятежного созерцания, детской легкости и чистоты восприятия. Неприхотливый узор синеватой скатерти, забавный, энергичный, нечеткий, завлекает внимание зрителя и будто бы напоминает о том, что жизнь – всего лишь игра – красочная и радостная.\n" +
                        "\n",R.drawable.second));

        recipes1.add(new Recipes("«Флейтист»","Давид Тенирс Младший" ,
                "Описание картины","\n" +
                "В произведении Тенирса представлен увлеченно музицирующий флейтист, который олицетворяет Слух (Auditus) из аллегории «Пять чувств». Со времен Ренессанса воплощением Слуха в живописи являлся музыкальный инструмент. Однако на картине Тенирса присущий <<Auditus>> возвышенный строй аллегории теряет первоначальный смысл и трактуется в бытовом плане. Аналогичная интерпретация аллегории Слуха встречалась в эрмитажном произведении Сцена в кабачке.\n",R.drawable.therd));
        recipes1.add(new Recipes("«Корабль среди бурного моря»","Иван Константинович Айвазовский" ,
                "Описание картины",
                " В картине «Корабль среди бурного моря» ясно читается романтический характер работы. Прошедшая буря нанесла непоправимый ущерб кораблю, его канаты перепутались и безвольно повисли среди мачт. Судно скрипит и стонет, еще держится на плаву, но жестокие волны постепенно сломят сопротивление и увлекут его ко дну. Осиротевший корабль в спешке покидают сидящие в шлюпке люди, отчаянно гребущие к берегу. Грозовое небо не до конца распогодилось, чуть проблескивают лучи солнца, озаряя холодную и пенящуюся поверхность морской глади. Зритель видит сквозь безбрежные просторы голубых волн обломки погибших кораблей. С каждым мазком мастера полотно становится все более драматичным.",R.drawable.first));
        recipes1.add(new Recipes("«Любительница абсента»","Пабло Пикассо",
                "Описание картины",
                " Цветовая гамма работы очень контрастна. Сине-голубой борется с оранжево-коричневым. Мир иллюзий с реальностью. Линии фигуры четкие, контрастные. Окружение фигуры слегка размыто, зритель видит его глазами героини. Подобная игра с пространством создает иллюзию двойного присутствия героини.\n" +
                        "\n" +
                        "   Композиционно бокал и сифон с водой повторяют очертания героини. Они словно две стороны одного и того же, связанные неразрывно. Подобные ассоциативные связи ярко характеризуют все творчество художника.\n" +
                        "\n" +
                        "   Атмосфера картины насыщена ощущением борьбы между реальностью и иллюзиями. Трагичность ситуации заключается в том, что иллюзии убивают реальность, и сознание героини вскоре не сможет переносить реальности, окончательно сделав выбор в пользу фантастических видений, разрушающих способность мыслить, оценивать, жить.",R.drawable.forth));
        recipes1.add(new Recipes("«Музыка»","Анри Матисс" ,
                "Описание картины"  ,
                "Каждое лицо на полотне кажется повторением соседнего, настолько они похожи. Художник старательно добивался этого, лишая своих персонажей узнаваемости и индивидуальности. Это было сделано для того, чтобы все фигуры воспринимались как абстрактное обозначение музыки. Интересно, что в «Танце» все персонажи — это женщины, а в этом полотне задействованы только мужчины, хоть и со старательно закамуфлированной половой принадлежностью.\n" +
                        "\n" +
                        "По своему духу эта картина полная противоположность ее динамичному и очень экспрессивному «брату». Оба полотна сознательно противопоставляются, при этом они столь же мастерски объединены вместе при помощи одинаковой методики исполнения и такой же цветовой гаммы. Они — единое целое дуалистической модели творческого начала.",R.drawable.fith));


        myrecyclerView = (RecyclerView)findViewById(R.id.recyclerView_id);

        myAdapter = new RecyclerViewAdapter(this,recipes1);

        myrecyclerView.setLayoutManager(new GridLayoutManager(this,1));

        myrecyclerView.setAdapter(myAdapter);



    }

}