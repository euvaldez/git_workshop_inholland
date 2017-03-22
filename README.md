Instructies voor de workshop.

Verschillend
=========================================
1. Zonder wijzinging type: git dif.
2. Ga naar main.c en doet de TODO
3. Wat zie je als de command git diff type?

Staging en unstaging
=========================================
1. Beschrijf het verschillend:
    1.   `git reset`
    2.  `git reset --soft`
    3.   `git reset --hard`
2. Verander iets in main.c. Zorg dat je heeft geen open wijzinging
3. `git add` them
4. `git reset` them
5. `git checkout .`
6. `git reset --soft HEAD^`
7. Wat gebeurde?
8. `git reset origin/master --hard`

Branches
=========================================
1. Creëer een branch feature/playing_git met je wijzinging
2. Wijzinnging iets in main.c
3. commit it
4. let the master resemble origin/master again
5. check that your branch still has your commit
6. Merge je wijzinging naar de master. Hint gebruik git merge

rebasing and ammending
======================
1. Wat is de doel van rebasing?
2. Wanner wil je rebasing of ammending je commits?
4. Maak een branch (of backup als je onzeker voel je)
5. Checkout de branch
6. Maak een wijzinging en ammend het latste commit
7. Zorg dat je 2 non pushed commits heeft. Maak een nieuwe als die nodig is.
8. `git rebase -i` combineer alle niet gepushed commits in een.
