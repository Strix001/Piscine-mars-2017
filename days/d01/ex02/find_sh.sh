find . -name "*.sh" | sed 's/.*\///' | rev | sed 's/hs.//' | rev
