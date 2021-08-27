package com.example.sum;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private EditText edt1,edt2;
    private TextView txtv1;
    private Button btn1;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        edt1 = findViewById(R.id.et1);
        edt2 = findViewById(R.id.et2);
        txtv1 = findViewById(R.id.tv1);
        btn1 = findViewById(R.id.b1);

        btn1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(edt1.getText().toString().length()==0)
                {
                    edt1.setText("0");
                }
                if(edt2.getText().toString().length()==0)
                {
                    edt2.setText("0");
                }
                int num1=Integer.parseInt(edt1.getText().toString());
                int num2=Integer.parseInt(edt2.getText().toString());
                int sum=num1+num2;
                txtv1.setText(String.valueOf(sum));
            }
        });
    }
}