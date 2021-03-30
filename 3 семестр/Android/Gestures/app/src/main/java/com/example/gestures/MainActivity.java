package com.example.gestures;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.view.GestureDetectorCompat;
import android.os.Bundle;
import android.view.GestureDetector;
import android.view.MotionEvent;
import android.widget.TextView;
public class MainActivity extends AppCompatActivity implements
        GestureDetector.OnGestureListener,
        GestureDetector.OnDoubleTapListener{
    private  TextView txt;
    private GestureDetectorCompat mDetector;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        txt = (TextView)findViewById(R.id.text123);
        mDetector = new GestureDetectorCompat(this, this);
        mDetector.setOnDoubleTapListener(this);
    }
    @Override
    public boolean onTouchEvent(MotionEvent event){
        mDetector.onTouchEvent(event);
        return super.onTouchEvent(event);
    }
    @Override
    public boolean onSingleTapConfirmed(MotionEvent e) {
        TextView textView = (TextView) findViewById(R.id.text456);
        textView.setText("Обычное одиночное нажатие на кран");
        txt.setText("onLongPress"+ e.toString());
        return false;
    }
    @Override
    public boolean onDoubleTap(MotionEvent e) {
        TextView textView = (TextView) findViewById(R.id.text456);
        textView.setText("Двойное нажатие на кран");
        txt.setText("onLongPress"+ e.toString());
        return false;
    }
    @Override
    public boolean onDoubleTapEvent(MotionEvent e) {
        TextView textView = (TextView) findViewById(R.id.text456);
        textView.setText("Двойное нажатие и перемещение (подъём пальца и т.д.)");
        txt.setText("onLongPress"+ e.toString());
        return false;
    }


    @Override
    public boolean onDown(MotionEvent e) {
        TextView textView = (TextView) findViewById(R.id.text456);
        textView.setText("Палец прижат к экрану");
        txt.setText("onLongPress"+ e.toString());
        return false;
    }
    @Override
    public void onShowPress(MotionEvent e) {
        TextView textView = (TextView) findViewById(R.id.text456);
        textView.setText("Касание экрана пальцем без дополнительных действий");
        txt.setText("onLongPress"+ e.toString());
    }
    @Override
    public boolean onSingleTapUp(MotionEvent e) {
        TextView textView = (TextView) findViewById(R.id.text456);
        textView.setText("Отжатие пальца от экрана");
        txt.setText("onLongPress"+ e.toString());
        return false;
    }
    @Override
    public boolean onScroll(MotionEvent e1, MotionEvent e2, float distanceX, float distanceY) {
        TextView textView = (TextView) findViewById(R.id.text456);
        textView.setText("Прокрутка пальцем по экрану (пролистывание)");
        txt.setText("onScroll"+ e1.toString());
        txt.setText("onScroll"+ e2.toString());
        return false;
    }
    @Override
    public void onLongPress(MotionEvent e) {
        TextView textView = (TextView) findViewById(R.id.text456);
        textView.setText("Долгое нажатие пальцем на экран");
        txt.setText("onLongPress"+ e.toString());
    }
    @Override
    public boolean onFling(MotionEvent e1, MotionEvent e2, float velocityX, float velocityY) {
        TextView textView = (TextView) findViewById(R.id.text456);
        textView.setText("Использован жест смахивания");
        txt.setText("onLongPress"+ e1.toString());
        txt.setText("onLongPress"+ e2.toString());
        return false;
    }
}
