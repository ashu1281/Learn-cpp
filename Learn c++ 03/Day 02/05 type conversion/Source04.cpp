void main() {
	// int u = (int)5.0; //it is c style casting
    int u = static_cast<int>(5.0);//it is c++ style casting
}

/*
* dont use c style casting anywhere excluding c lang
* static_cast is known as casting operator.
* It is used in explicit type conversion.
* By doing explicit type cast, we take responsibility of loss of data due to type conversion to ourselves.
* In such case, compiler stops producing warnings related to the type conversion.
*/