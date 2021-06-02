#pragma once

enum eWeatherType {
    WEATHER_UNDEFINED = -1,

    WEATHER_EXTRASUNNY_LA = 0,
    WEATHER_SUNNY_LA = 1,
    WEATHER_EXTRASUNNY_SMOG_LA = 2,
    WEATHER_SUNNY_SMOG_LA = 3,
    WEATHER_CLOUDY_LA = 4,

    WEATHER_SUNNY_SF = 5,
    WEATHER_EXTRASUNNY_SF = 6,
    WEATHER_CLOUDY_SF = 7,
    WEATHER_RAINY_SF = 8,
    WEATHER_FOGGY_SF = 9,

    WEATHER_SUNNY_VEGAS = 10,
    WEATHER_EXTRASUNNY_VEGAS = 11,
    WEATHER_CLOUDY_VEGAS = 12,

    WEATHER_EXTRASUNNY_COUNTRYSIDE = 13,
    WEATHER_SUNNY_COUNTRYSIDE = 14,
    WEATHER_CLOUDY_COUNTRYSIDE = 15,
    WEATHER_RAINY_COUNTRYSIDE = 16,

    WEATHER_EXTRASUNNY_DESERT = 17,
    WEATHER_SUNNY_DESERT = 18,
    WEATHER_SANDSTORM_DESERT = 19,

    WEATHER_UNDERWATER = 20,
    WEATHER_EXTRACOLOURS_1 = 21,
    WEATHER_EXTRACOLOURS_2 = 22
};
