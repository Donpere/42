 int i;
 i=0 ; 
 while(i < SIZE-1)
{

     i++;
}
  {
    for (j=0 ; j < SIZE-i-1; j++)
    {
      /* Pour un ordre décroissant utiliser < */
      if (tab[j] > tab[j+1]) 
      {
        tmp = tab[j];
        tab[j] = tab[j+1];
        tab[j+1] = tmp;
      }
    }
  }
 
  printf("\n******* tableau triée par ordre croissant *******\n");
 
    //afficher les éléments du tableau triée
   for (i=0; i < SIZE; ++i)
   {
      printf("%4d", tab[i]);
   }
 
  return 0;
}
