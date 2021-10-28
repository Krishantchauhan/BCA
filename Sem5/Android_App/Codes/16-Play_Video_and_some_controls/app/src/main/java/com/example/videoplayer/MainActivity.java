package com.example.videoplayer;

import androidx.appcompat.app.AppCompatActivity;

import android.net.Uri;
import android.os.Bundle;
import android.widget.MediaController;
import android.widget.VideoView;

import java.net.URI;

public class MainActivity extends AppCompatActivity {
    VideoView vv1;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        vv1 = findViewById(R.id.v1);
        String  path = "android.resource://"+getPackageName()+"/"+R.raw.worst;
        Uri url = Uri.parse(path);
        vv1.setVideoURI(url);

        MediaController m = new MediaController(this);
        vv1.setMediaController(m);
        m.setAnchorView(vv1);


    }
}