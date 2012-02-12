main(f){
  float w;
  char*p[]={"light fly","fly","bantam","feather","light","light welter",
	    "welter","light middle","middle","light heavy","heavy"};
  for(;~scanf("%f",&w);){
    f=w>48?w>51?w>54?w>57?w>60?w>64?w>69?w>75?w>81?w>91?10:9:8:7:6:5:4:3:2:1:0;
    puts(p[f]);
  }
  return 0;
}
