namespace targets
{
    class Alien
    {
        int health{3};

    public:
        int x_coordinate{};
        int y_coordinate{};

        Alien(int x, int y)
        {
            int x_coordinate = x;
            int y_coordinate = y;
        }

        int get_health()
        {
            return health;
        }

        bool hit()
        {
            if (health > 0)
            {
                health--;
            }
            return true;
        }

        bool is_alive()
        {
            return health > 0;
        }
        bool teleport(int x_new, int y_new)
        {
            x_coordinate = x_new;
            y_coordinate = y_new;
            return true;
        }

        bool collision_detection(Alien alien)
        {

            if (x_coordinate == alien.x_coordinate && y_coordinate == alien.y_coordinate)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    };
} // namespace targets