package com.example.sounds;

import androidx.appcompat.app.AppCompatActivity;
import android.media.MediaPlayer;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageView;

public class MainActivity extends AppCompatActivity {

    private ImageView car1, car2, car3;
    private MediaPlayer carsound1, carsound2, carsound3;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        car1 = (ImageView)findViewById(R.id.imageView1);
        car2 = (ImageView)findViewById(R.id.imageView2);
        car3 = (ImageView)findViewById(R.id.imageView3);

        carsound1 = MediaPlayer.create(this, R.raw.b);
        carsound2 = MediaPlayer.create(this, R.raw.f);
        carsound3 = MediaPlayer.create(this, R.raw.s);

        imageClick();

    }

    public void imageClick(){
        car1.setOnClickListener(
                new View.OnClickListener(){
                    @Override
                    public void onClick(View view){
                        soundPlay(carsound1);
                    }
                }
        );
        car2.setOnClickListener(
                new View.OnClickListener(){
                    @Override
                    public void onClick(View view){
                        soundPlay(carsound2);
                    }
                }
        );

        car3.setOnClickListener(
                new View.OnClickListener(){
                    @Override
                    public void onClick(View view){
                        soundPlay(carsound3);
                    }
                }
        );
    }
    public  void soundPlay (MediaPlayer sound){
        sound.start();
    }
}

