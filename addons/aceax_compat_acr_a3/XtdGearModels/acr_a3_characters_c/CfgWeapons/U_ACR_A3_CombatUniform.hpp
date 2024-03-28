class U_ACR_A3_CombatUniform
{
    options[] = { "Type", "camo" }; // Always computed, do not edit
    label = "Combat Fatigues";
    class camo
    {
        alwaysSelectable = 1;
        values[] = { "Vz. 95", "Desert", "MOUT", "MOUT Desert" }; // Always computed, do not edit
    };
    class Type
    {
        label = "Type";
        alwaysSelectable = 1;
        values[] = { "Base", "Rolled Up", "T-Shirt" , "Sweater" }; // Always computed, do not edit
    };
};
