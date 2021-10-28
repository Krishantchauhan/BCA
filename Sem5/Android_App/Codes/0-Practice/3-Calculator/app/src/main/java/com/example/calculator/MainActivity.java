package com.example.calculator;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    EditText e1, e2;
    TextView tv1;
    int num1, num2;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    public boolean getNumbers() {

        e1 = (EditText) findViewById(R.id.num1);

        e2 = (EditText) findViewById(R.id.num2);

        tv1 = (TextView) findViewById(R.id.ans);

        String s1 = e1.getText().toString();

        String s2 = e2.getText().toString();

        if ((s1.equals(null) && s2.equals(null)) || (s1.equals("") && s2.equals(""))) {

            String result = "Please enter a value";
            tv1.setText(result);
            return false;
        } else {
            num1 = Integer.parseInt(s1);
            num2 = Integer.parseInt(s2);
        }
        return true;
    }


    public void doSum(View v) {

        if (getNumbers()) {
            int sum = num1 + num2;
            tv1.setText(Integer.toString(sum));
        }
    }

    public void doPow(View v) {

        if (getNumbers()) {
            double sum = Math.pow(num1, num2);
            tv1.setText(Double.toString(sum));
        }
    }

    public void doSub(View v) {
        if (getNumbers()) {
            int sum = num1 - num2;
            tv1.setText(Integer.toString(sum));
        }
    }

    public void doMul(View v) {
        if (getNumbers()) {
            int sum = num1 * num2;
            tv1.setText(Integer.toString(sum));
        }
    }

    public void doDiv(View v) {

        if (getNumbers()) {
            double sum = num1 / (num2 * 1.0);
            tv1.setText(Double.toString(sum));
        }
    }

    public void doMod(View v) {
        if (getNumbers()) {
            double sum = num1 % num2;
            tv1.setText(Double.toString(sum));
        }
    }
}