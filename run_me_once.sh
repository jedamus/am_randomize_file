#!/usr/bin/env sh

# erzeugt Mittwoch, 20. November 2019 14:15 (C) 2019 von Leander Jedamus
# modifiziert Donnerstag, 21. November 2019 07:10 von Leander Jedamus
# modifiziert Mittwoch, 20. November 2019 14:16 von Leander Jedamus

autoreconf --install
./configure
make
src/am_randomize_file
make distcheck

# vim:ai sw=2

