#include "../../s21_smart_calc.h"

void signal_connection(GtkWidget **buttons, gpointer ptr) {
  g_signal_connect_swapped(G_OBJECT(buttons[8]), "clicked",
                           G_CALLBACK(button_clicked_7), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[9]), "clicked",
                           G_CALLBACK(button_clicked_8), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[10]), "clicked",
                           G_CALLBACK(button_clicked_9), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[14]), "clicked",
                           G_CALLBACK(button_clicked_4), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[15]), "clicked",
                           G_CALLBACK(button_clicked_5), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[16]), "clicked",
                           G_CALLBACK(button_clicked_6), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[20]), "clicked",
                           G_CALLBACK(button_clicked_1), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[21]), "clicked",
                           G_CALLBACK(button_clicked_2), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[22]), "clicked",
                           G_CALLBACK(button_clicked_3), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[28]), "clicked",
                           G_CALLBACK(button_clicked_0), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[27]), "clicked",
                           G_CALLBACK(button_clicked_dot), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[26]), "clicked",
                           G_CALLBACK(button_clicked_x), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[23]), "clicked",
                           G_CALLBACK(button_clicked_plus), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[2]), "clicked",
                           G_CALLBACK(button_clicked_c), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[5]), "clicked",
                           G_CALLBACK(button_clicked_div), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[11]), "clicked",
                           G_CALLBACK(button_clicked_mult), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[17]), "clicked",
                           G_CALLBACK(button_clicked_minus), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[29]), "clicked",
                           G_CALLBACK(button_clicked_mod), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[3]), "clicked",
                           G_CALLBACK(button_clicked_scope), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[0]), "clicked",
                           G_CALLBACK(button_clicked_sin), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[1]), "clicked",
                           G_CALLBACK(button_clicked_asin), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[6]), "clicked",
                           G_CALLBACK(button_clicked_cos), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[7]), "clicked",
                           G_CALLBACK(button_clicked_acos), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[12]), "clicked",
                           G_CALLBACK(button_clicked_tan), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[13]), "clicked",
                           G_CALLBACK(button_clicked_atan), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[18]), "clicked",
                           G_CALLBACK(button_clicked_ln), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[19]), "clicked",
                           G_CALLBACK(button_clicked_log), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[25]), "clicked",
                           G_CALLBACK(button_clicked_sqrt), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[24]), "clicked",
                           G_CALLBACK(button_clicked_pow), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[32]), "clicked",
                           G_CALLBACK(button_clicked_enter), ptr);
  g_signal_connect_swapped(G_OBJECT(buttons[31]), "clicked",
                           G_CALLBACK(button_clicked_graph), ptr);
}
