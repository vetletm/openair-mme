/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-CommonDataTypes"
 * 	found in "S1AP-CommonDataTypes.asn"
 */

#include "S1ap-PrivateIE-ID.h"

static int memb_local_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
                                   asn_app_constraint_failed_f *ctfailcb,
                                   void *app_key) {
  long value;

  if (!sptr) {
    _ASN_CTFAIL(app_key, td, sptr, "%s: value not given (%s:%d)", td->name,
                __FILE__, __LINE__);
    return -1;
  }

  value = *(const long *)sptr;

  if ((value >= 0 && value <= 65535)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    _ASN_CTFAIL(app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name,
                __FILE__, __LINE__);
    return -1;
  }
}

static asn_TYPE_member_t asn_MBR_S1ap_PrivateIE_ID_1[] = {
    {ATF_NOFLAGS, 0, offsetof(struct S1ap_PrivateIE_ID, choice.local),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)), -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger, memb_local_constraint_1,
     0, /* PER is not compiled, use -gen-PER */
     0, "local"},
    {ATF_NOFLAGS, 0, offsetof(struct S1ap_PrivateIE_ID, choice.global),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)), -1, /* IMPLICIT tag at current level */
     &asn_DEF_OBJECT_IDENTIFIER,
     0, /* Defer constraints checking to the member type */
     0, /* PER is not compiled, use -gen-PER */
     0, "global"},
};
static asn_TYPE_tag2member_t asn_MAP_S1ap_PrivateIE_ID_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* local at 20 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}  /* global at 21 */
};
static asn_CHOICE_specifics_t asn_SPC_S1ap_PrivateIE_ID_specs_1 = {
    sizeof(struct S1ap_PrivateIE_ID),
    offsetof(struct S1ap_PrivateIE_ID, _asn_ctx),
    offsetof(struct S1ap_PrivateIE_ID, present),
    sizeof(((struct S1ap_PrivateIE_ID *)0)->present),
    asn_MAP_S1ap_PrivateIE_ID_tag2el_1,
    2, /* Count of tags in the map */
    0,
    -1 /* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_PrivateIE_ID = {
    "S1ap-PrivateIE-ID",
    "S1ap-PrivateIE-ID",
    CHOICE_free,
    CHOICE_print,
    CHOICE_constraint,
    CHOICE_decode_ber,
    CHOICE_encode_der,
    CHOICE_decode_xer,
    CHOICE_encode_xer,
    0,
    0, /* No UPER support, use "-gen-PER" to enable */
    0,
    0, /* No APER support, use "-gen-PER" to enable */
    CHOICE_compare,
    CHOICE_outmost_tag,
    0, /* No effective tags (pointer) */
    0, /* No effective tags (count) */
    0, /* No tags (pointer) */
    0, /* No tags (count) */
    0, /* No PER visible constraints */
    asn_MBR_S1ap_PrivateIE_ID_1,
    2,                                 /* Elements count */
    &asn_SPC_S1ap_PrivateIE_ID_specs_1 /* Additional specs */
};
