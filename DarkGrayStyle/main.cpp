/*
###############################################################################
#                                                                             #
# The MIT License                                                             #
#                                                                             #
# Copyright (C) 2017 by Juergen Skrotzky (JorgenVikingGod@gmail.com)          #
#               >> https://github.com/Jorgen-VikingGod                        #
#                                                                             #
# Sources: https://github.com/Jorgen-VikingGod/Qt-Frameless-Window-DarkStyle  #
#                                                                             #
###############################################################################
*/

#include <QApplication>
#include "DarkStyle.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  QApplication::setStyle(new DarkStyle);

  return a.exec();
}
