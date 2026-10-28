# Plan: Night at the Museum

## Story
You are a secutiry guard at a museum. It's closing time and the lights are on in the museum for some reason. The front entrance is locked for the night, but the back entrance may be open still. You can investigate the museums private archives, find a secret part of the museum. or just go home. Your choices will determine if you ignore the mystery or solve why the lights are still on.

## Story Map
main_menu
    1 -> choice_front_entrance
        1 -> choice_back_entrance
            1 -> entern_hidden_room
                1 -> escape_museum
                2 -> choice_go_home
        2 -> choice_go_home
    2 -> choice_back_entrance
        1 -> enter_hidden_room
            1 -> escape_museum
            2 -> choice_go_home
        2 -> choice_go_home
    3 -> choice_go_home
    4 -> quit

## Functions
- main_menu                 (starter, mian choices)
- choice_front_entrance     (starter, entrnace locked)
- choice_back_entrance      (starter, other choices)
- choice_go_home            (starter,boring ending)
- enter_hidden_room         (new, secret museum exhibit found)
- escape_museum             (new, hidden ending)