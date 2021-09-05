package com.example.image_change;

import android.os.Bundle;
import android.view.View;
import android.widget.ImageView;
import android.app.Activity;

public class MainActivity extends Activity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }



    public void mess(View v)
    {
        ImageView im=(ImageView)findViewById(R.id.imageView1);
        switch(v.getId())
        {
            case R.id.button1:
                im.setImageResource(R.drawable.insta);
                break;
            case R.id.button2:
                im.setImageResource(R.drawable.fb);
                break;
        }
    }
}