package com.example.magicball;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.ImageView;
import android.widget.TextView;

import com.google.android.material.floatingactionbutton.FloatingActionButton;

import java.util.Random;

public class MainActivity extends AppCompatActivity {
    private ImageView imageView;
    private TextView textView;
    private FloatingActionButton fab;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        imageView=findViewById(R.id.imageView);
        textView=findViewById(R.id.textView);
        fab=findViewById(R.id.floatingActionButton);


        fab.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String [] arr={"Бесспорно", "Предрешено", "Никаких сомнений", "Определённо да",
                        "Мне кажется — «да»", "Вероятнее всего", "Хорошие перспективы", "Да",
                        "Спроси позже", "Сейчас нельзя предсказать",
                        "Даже не думай", "Мой ответ — «нет»", "По моим данным — «нет»", "Нет",};
                int randomWord = new Random() .nextInt(arr.length);
                textView.setText(arr[randomWord]);
            }
        });
    }
}