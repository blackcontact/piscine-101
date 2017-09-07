find . -type f -iname \*.sh -exec basename {} ';' | cut -d. -f1
