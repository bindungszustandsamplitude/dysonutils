if(quark_2.mass() == 0.7950)
{
if(quark_1.mass() == 0.7950)
{
    PM11p   = ns_data::prop_vc_t("7950_7950", qp_qp);
    PM11m   = ns_data::prop_vc_t("7950_7950", qm_qm);
    PM11Lp  = ns_data::prop_vc_l("7950_7950", qp_qp);
    PM11Lm  = ns_data::prop_vc_l("7950_7950", qm_qm);

    PM12p   = ns_data::prop_vc_t("7950_7950", qp_qp);
    PM12m   = ns_data::prop_vc_t("7950_7950", qm_qm);
    PM12Lp  = ns_data::prop_vc_l("7950_7950", qp_qp);
    PM12Lm  = ns_data::prop_vc_l("7950_7950", qm_qm);

    PM21p   = ns_data::prop_vc_t("7950_7950", qp_qp);
    PM21m   = ns_data::prop_vc_t("7950_7950", qm_qm);
    PM21Lp  = ns_data::prop_vc_l("7950_7950", qp_qp);
    PM21Lm  = ns_data::prop_vc_l("7950_7950", qm_qm);

    PM22p   = ns_data::prop_vc_t("7950_7950", qp_qp);
    PM22m   = ns_data::prop_vc_t("7950_7950", qm_qm);
    PM22Lp  = ns_data::prop_vc_l("7950_7950", qp_qp);
    PM22Lm  = ns_data::prop_vc_l("7950_7950", qm_qm);

    PDQ1p   = ns_data::prop_sc("7950_7950", qp_qp);
    PDQ1m   = ns_data::prop_sc("7950_7950", qm_qm);

    PDQ2p   = ns_data::prop_ax_t("7950_7950", qp_qp);
    PDQ2m   = ns_data::prop_ax_t("7950_7950", qm_qm);
    PDQ2Lp  = ns_data::prop_ax_l("7950_7950", qp_qp);
    PDQ2Lm  = ns_data::prop_ax_l("7950_7950", qm_qm);
}
}
