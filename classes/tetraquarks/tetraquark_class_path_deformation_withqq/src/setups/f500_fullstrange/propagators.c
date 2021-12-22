if(quark_2.mass() < 0.100)
{
if(quark_1.mass() < 0.100)
{
    PM11p   = 1./(qp_qp+meson_11.mass()*meson_11.mass());
    PM11m   = 1./(qm_qm+meson_11.mass()*meson_11.mass());

    PM12p   = 1./(qp_qp+meson_12.mass()*meson_12.mass());
    PM12m   = 1./(qm_qm+meson_12.mass()*meson_12.mass());

    PM21p   = 1./(qp_qp+meson_21.mass()*meson_21.mass());
    PM21m   = 1./(qm_qm+meson_21.mass()*meson_21.mass());

    PM22p   = 1./(qp_qp+meson_22.mass()*meson_22.mass());
    PM22m   = 1./(qm_qm+meson_22.mass()*meson_22.mass());

    PDQ1p   = 1./(qp_qp+diquark_1.mass()*diquark_1.mass());
    PDQ1m   = 1./(qm_qm+diquark_1.mass()*diquark_1.mass());

    PDQ2p   = 1./(qp_qp+diquark_2.mass()*diquark_2.mass());
    PDQ2m   = 1./(qm_qm+diquark_2.mass()*diquark_2.mass());
}
}