// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_SPOT_HIKYUU_FLAT_H_
#define FLATBUFFERS_GENERATED_SPOT_HIKYUU_FLAT_H_

#include "flatbuffers/flatbuffers.h"

namespace hikyuu {
namespace flat {

struct Spot;
struct SpotBuilder;

struct SpotList;
struct SpotListBuilder;

struct Spot FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef SpotBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_MARKET = 4,
    VT_CODE = 6,
    VT_NAME = 8,
    VT_DATETIME = 10,
    VT_YESTERDAY_CLOSE = 12,
    VT_OPEN = 14,
    VT_HIGH = 16,
    VT_LOW = 18,
    VT_CLOSE = 20,
    VT_AMOUNT = 22,
    VT_VOLUMN = 24,
    VT_BID1 = 26,
    VT_BID1_AMOUNT = 28,
    VT_BID2 = 30,
    VT_BID2_AMOUNT = 32,
    VT_BID3 = 34,
    VT_BID3_AMOUNT = 36,
    VT_BID4 = 38,
    VT_BID4_AMOUNT = 40,
    VT_BID5 = 42,
    VT_BID5_AMOUNT = 44,
    VT_ASK1 = 46,
    VT_ASK1_AMOUNT = 48,
    VT_ASK2 = 50,
    VT_ASK2_AMOUNT = 52,
    VT_ASK3 = 54,
    VT_ASK3_AMOUNT = 56,
    VT_ASK4 = 58,
    VT_ASK4_AMOUNT = 60,
    VT_ASK5 = 62,
    VT_ASK5_AMOUNT = 64
  };
  const flatbuffers::String *market() const {
    return GetPointer<const flatbuffers::String *>(VT_MARKET);
  }
  const flatbuffers::String *code() const {
    return GetPointer<const flatbuffers::String *>(VT_CODE);
  }
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  const flatbuffers::String *datetime() const {
    return GetPointer<const flatbuffers::String *>(VT_DATETIME);
  }
  float yesterday_close() const {
    return GetField<float>(VT_YESTERDAY_CLOSE, 0.0f);
  }
  float open() const {
    return GetField<float>(VT_OPEN, 0.0f);
  }
  float high() const {
    return GetField<float>(VT_HIGH, 0.0f);
  }
  float low() const {
    return GetField<float>(VT_LOW, 0.0f);
  }
  float close() const {
    return GetField<float>(VT_CLOSE, 0.0f);
  }
  float amount() const {
    return GetField<float>(VT_AMOUNT, 0.0f);
  }
  float volumn() const {
    return GetField<float>(VT_VOLUMN, 0.0f);
  }
  float bid1() const {
    return GetField<float>(VT_BID1, 0.0f);
  }
  float bid1_amount() const {
    return GetField<float>(VT_BID1_AMOUNT, 0.0f);
  }
  float bid2() const {
    return GetField<float>(VT_BID2, 0.0f);
  }
  float bid2_amount() const {
    return GetField<float>(VT_BID2_AMOUNT, 0.0f);
  }
  float bid3() const {
    return GetField<float>(VT_BID3, 0.0f);
  }
  float bid3_amount() const {
    return GetField<float>(VT_BID3_AMOUNT, 0.0f);
  }
  float bid4() const {
    return GetField<float>(VT_BID4, 0.0f);
  }
  float bid4_amount() const {
    return GetField<float>(VT_BID4_AMOUNT, 0.0f);
  }
  float bid5() const {
    return GetField<float>(VT_BID5, 0.0f);
  }
  float bid5_amount() const {
    return GetField<float>(VT_BID5_AMOUNT, 0.0f);
  }
  float ask1() const {
    return GetField<float>(VT_ASK1, 0.0f);
  }
  float ask1_amount() const {
    return GetField<float>(VT_ASK1_AMOUNT, 0.0f);
  }
  float ask2() const {
    return GetField<float>(VT_ASK2, 0.0f);
  }
  float ask2_amount() const {
    return GetField<float>(VT_ASK2_AMOUNT, 0.0f);
  }
  float ask3() const {
    return GetField<float>(VT_ASK3, 0.0f);
  }
  float ask3_amount() const {
    return GetField<float>(VT_ASK3_AMOUNT, 0.0f);
  }
  float ask4() const {
    return GetField<float>(VT_ASK4, 0.0f);
  }
  float ask4_amount() const {
    return GetField<float>(VT_ASK4_AMOUNT, 0.0f);
  }
  float ask5() const {
    return GetField<float>(VT_ASK5, 0.0f);
  }
  float ask5_amount() const {
    return GetField<float>(VT_ASK5_AMOUNT, 0.0f);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_MARKET) &&
           verifier.VerifyString(market()) &&
           VerifyOffset(verifier, VT_CODE) &&
           verifier.VerifyString(code()) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyOffset(verifier, VT_DATETIME) &&
           verifier.VerifyString(datetime()) &&
           VerifyField<float>(verifier, VT_YESTERDAY_CLOSE) &&
           VerifyField<float>(verifier, VT_OPEN) &&
           VerifyField<float>(verifier, VT_HIGH) &&
           VerifyField<float>(verifier, VT_LOW) &&
           VerifyField<float>(verifier, VT_CLOSE) &&
           VerifyField<float>(verifier, VT_AMOUNT) &&
           VerifyField<float>(verifier, VT_VOLUMN) &&
           VerifyField<float>(verifier, VT_BID1) &&
           VerifyField<float>(verifier, VT_BID1_AMOUNT) &&
           VerifyField<float>(verifier, VT_BID2) &&
           VerifyField<float>(verifier, VT_BID2_AMOUNT) &&
           VerifyField<float>(verifier, VT_BID3) &&
           VerifyField<float>(verifier, VT_BID3_AMOUNT) &&
           VerifyField<float>(verifier, VT_BID4) &&
           VerifyField<float>(verifier, VT_BID4_AMOUNT) &&
           VerifyField<float>(verifier, VT_BID5) &&
           VerifyField<float>(verifier, VT_BID5_AMOUNT) &&
           VerifyField<float>(verifier, VT_ASK1) &&
           VerifyField<float>(verifier, VT_ASK1_AMOUNT) &&
           VerifyField<float>(verifier, VT_ASK2) &&
           VerifyField<float>(verifier, VT_ASK2_AMOUNT) &&
           VerifyField<float>(verifier, VT_ASK3) &&
           VerifyField<float>(verifier, VT_ASK3_AMOUNT) &&
           VerifyField<float>(verifier, VT_ASK4) &&
           VerifyField<float>(verifier, VT_ASK4_AMOUNT) &&
           VerifyField<float>(verifier, VT_ASK5) &&
           VerifyField<float>(verifier, VT_ASK5_AMOUNT) &&
           verifier.EndTable();
  }
};

struct SpotBuilder {
  typedef Spot Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_market(flatbuffers::Offset<flatbuffers::String> market) {
    fbb_.AddOffset(Spot::VT_MARKET, market);
  }
  void add_code(flatbuffers::Offset<flatbuffers::String> code) {
    fbb_.AddOffset(Spot::VT_CODE, code);
  }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(Spot::VT_NAME, name);
  }
  void add_datetime(flatbuffers::Offset<flatbuffers::String> datetime) {
    fbb_.AddOffset(Spot::VT_DATETIME, datetime);
  }
  void add_yesterday_close(float yesterday_close) {
    fbb_.AddElement<float>(Spot::VT_YESTERDAY_CLOSE, yesterday_close, 0.0f);
  }
  void add_open(float open) {
    fbb_.AddElement<float>(Spot::VT_OPEN, open, 0.0f);
  }
  void add_high(float high) {
    fbb_.AddElement<float>(Spot::VT_HIGH, high, 0.0f);
  }
  void add_low(float low) {
    fbb_.AddElement<float>(Spot::VT_LOW, low, 0.0f);
  }
  void add_close(float close) {
    fbb_.AddElement<float>(Spot::VT_CLOSE, close, 0.0f);
  }
  void add_amount(float amount) {
    fbb_.AddElement<float>(Spot::VT_AMOUNT, amount, 0.0f);
  }
  void add_volumn(float volumn) {
    fbb_.AddElement<float>(Spot::VT_VOLUMN, volumn, 0.0f);
  }
  void add_bid1(float bid1) {
    fbb_.AddElement<float>(Spot::VT_BID1, bid1, 0.0f);
  }
  void add_bid1_amount(float bid1_amount) {
    fbb_.AddElement<float>(Spot::VT_BID1_AMOUNT, bid1_amount, 0.0f);
  }
  void add_bid2(float bid2) {
    fbb_.AddElement<float>(Spot::VT_BID2, bid2, 0.0f);
  }
  void add_bid2_amount(float bid2_amount) {
    fbb_.AddElement<float>(Spot::VT_BID2_AMOUNT, bid2_amount, 0.0f);
  }
  void add_bid3(float bid3) {
    fbb_.AddElement<float>(Spot::VT_BID3, bid3, 0.0f);
  }
  void add_bid3_amount(float bid3_amount) {
    fbb_.AddElement<float>(Spot::VT_BID3_AMOUNT, bid3_amount, 0.0f);
  }
  void add_bid4(float bid4) {
    fbb_.AddElement<float>(Spot::VT_BID4, bid4, 0.0f);
  }
  void add_bid4_amount(float bid4_amount) {
    fbb_.AddElement<float>(Spot::VT_BID4_AMOUNT, bid4_amount, 0.0f);
  }
  void add_bid5(float bid5) {
    fbb_.AddElement<float>(Spot::VT_BID5, bid5, 0.0f);
  }
  void add_bid5_amount(float bid5_amount) {
    fbb_.AddElement<float>(Spot::VT_BID5_AMOUNT, bid5_amount, 0.0f);
  }
  void add_ask1(float ask1) {
    fbb_.AddElement<float>(Spot::VT_ASK1, ask1, 0.0f);
  }
  void add_ask1_amount(float ask1_amount) {
    fbb_.AddElement<float>(Spot::VT_ASK1_AMOUNT, ask1_amount, 0.0f);
  }
  void add_ask2(float ask2) {
    fbb_.AddElement<float>(Spot::VT_ASK2, ask2, 0.0f);
  }
  void add_ask2_amount(float ask2_amount) {
    fbb_.AddElement<float>(Spot::VT_ASK2_AMOUNT, ask2_amount, 0.0f);
  }
  void add_ask3(float ask3) {
    fbb_.AddElement<float>(Spot::VT_ASK3, ask3, 0.0f);
  }
  void add_ask3_amount(float ask3_amount) {
    fbb_.AddElement<float>(Spot::VT_ASK3_AMOUNT, ask3_amount, 0.0f);
  }
  void add_ask4(float ask4) {
    fbb_.AddElement<float>(Spot::VT_ASK4, ask4, 0.0f);
  }
  void add_ask4_amount(float ask4_amount) {
    fbb_.AddElement<float>(Spot::VT_ASK4_AMOUNT, ask4_amount, 0.0f);
  }
  void add_ask5(float ask5) {
    fbb_.AddElement<float>(Spot::VT_ASK5, ask5, 0.0f);
  }
  void add_ask5_amount(float ask5_amount) {
    fbb_.AddElement<float>(Spot::VT_ASK5_AMOUNT, ask5_amount, 0.0f);
  }
  explicit SpotBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  SpotBuilder &operator=(const SpotBuilder &);
  flatbuffers::Offset<Spot> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Spot>(end);
    return o;
  }
};

inline flatbuffers::Offset<Spot> CreateSpot(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> market = 0,
    flatbuffers::Offset<flatbuffers::String> code = 0,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<flatbuffers::String> datetime = 0,
    float yesterday_close = 0.0f,
    float open = 0.0f,
    float high = 0.0f,
    float low = 0.0f,
    float close = 0.0f,
    float amount = 0.0f,
    float volumn = 0.0f,
    float bid1 = 0.0f,
    float bid1_amount = 0.0f,
    float bid2 = 0.0f,
    float bid2_amount = 0.0f,
    float bid3 = 0.0f,
    float bid3_amount = 0.0f,
    float bid4 = 0.0f,
    float bid4_amount = 0.0f,
    float bid5 = 0.0f,
    float bid5_amount = 0.0f,
    float ask1 = 0.0f,
    float ask1_amount = 0.0f,
    float ask2 = 0.0f,
    float ask2_amount = 0.0f,
    float ask3 = 0.0f,
    float ask3_amount = 0.0f,
    float ask4 = 0.0f,
    float ask4_amount = 0.0f,
    float ask5 = 0.0f,
    float ask5_amount = 0.0f) {
  SpotBuilder builder_(_fbb);
  builder_.add_ask5_amount(ask5_amount);
  builder_.add_ask5(ask5);
  builder_.add_ask4_amount(ask4_amount);
  builder_.add_ask4(ask4);
  builder_.add_ask3_amount(ask3_amount);
  builder_.add_ask3(ask3);
  builder_.add_ask2_amount(ask2_amount);
  builder_.add_ask2(ask2);
  builder_.add_ask1_amount(ask1_amount);
  builder_.add_ask1(ask1);
  builder_.add_bid5_amount(bid5_amount);
  builder_.add_bid5(bid5);
  builder_.add_bid4_amount(bid4_amount);
  builder_.add_bid4(bid4);
  builder_.add_bid3_amount(bid3_amount);
  builder_.add_bid3(bid3);
  builder_.add_bid2_amount(bid2_amount);
  builder_.add_bid2(bid2);
  builder_.add_bid1_amount(bid1_amount);
  builder_.add_bid1(bid1);
  builder_.add_volumn(volumn);
  builder_.add_amount(amount);
  builder_.add_close(close);
  builder_.add_low(low);
  builder_.add_high(high);
  builder_.add_open(open);
  builder_.add_yesterday_close(yesterday_close);
  builder_.add_datetime(datetime);
  builder_.add_name(name);
  builder_.add_code(code);
  builder_.add_market(market);
  return builder_.Finish();
}

inline flatbuffers::Offset<Spot> CreateSpotDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *market = nullptr,
    const char *code = nullptr,
    const char *name = nullptr,
    const char *datetime = nullptr,
    float yesterday_close = 0.0f,
    float open = 0.0f,
    float high = 0.0f,
    float low = 0.0f,
    float close = 0.0f,
    float amount = 0.0f,
    float volumn = 0.0f,
    float bid1 = 0.0f,
    float bid1_amount = 0.0f,
    float bid2 = 0.0f,
    float bid2_amount = 0.0f,
    float bid3 = 0.0f,
    float bid3_amount = 0.0f,
    float bid4 = 0.0f,
    float bid4_amount = 0.0f,
    float bid5 = 0.0f,
    float bid5_amount = 0.0f,
    float ask1 = 0.0f,
    float ask1_amount = 0.0f,
    float ask2 = 0.0f,
    float ask2_amount = 0.0f,
    float ask3 = 0.0f,
    float ask3_amount = 0.0f,
    float ask4 = 0.0f,
    float ask4_amount = 0.0f,
    float ask5 = 0.0f,
    float ask5_amount = 0.0f) {
  auto market__ = market ? _fbb.CreateString(market) : 0;
  auto code__ = code ? _fbb.CreateString(code) : 0;
  auto name__ = name ? _fbb.CreateString(name) : 0;
  auto datetime__ = datetime ? _fbb.CreateString(datetime) : 0;
  return hikyuu::flat::CreateSpot(
      _fbb,
      market__,
      code__,
      name__,
      datetime__,
      yesterday_close,
      open,
      high,
      low,
      close,
      amount,
      volumn,
      bid1,
      bid1_amount,
      bid2,
      bid2_amount,
      bid3,
      bid3_amount,
      bid4,
      bid4_amount,
      bid5,
      bid5_amount,
      ask1,
      ask1_amount,
      ask2,
      ask2_amount,
      ask3,
      ask3_amount,
      ask4,
      ask4_amount,
      ask5,
      ask5_amount);
}

struct SpotList FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef SpotListBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SPOT = 4
  };
  const flatbuffers::Vector<flatbuffers::Offset<hikyuu::flat::Spot>> *spot() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<hikyuu::flat::Spot>> *>(VT_SPOT);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_SPOT) &&
           verifier.VerifyVector(spot()) &&
           verifier.VerifyVectorOfTables(spot()) &&
           verifier.EndTable();
  }
};

struct SpotListBuilder {
  typedef SpotList Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_spot(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<hikyuu::flat::Spot>>> spot) {
    fbb_.AddOffset(SpotList::VT_SPOT, spot);
  }
  explicit SpotListBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  SpotListBuilder &operator=(const SpotListBuilder &);
  flatbuffers::Offset<SpotList> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<SpotList>(end);
    return o;
  }
};

inline flatbuffers::Offset<SpotList> CreateSpotList(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<hikyuu::flat::Spot>>> spot = 0) {
  SpotListBuilder builder_(_fbb);
  builder_.add_spot(spot);
  return builder_.Finish();
}

inline flatbuffers::Offset<SpotList> CreateSpotListDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<hikyuu::flat::Spot>> *spot = nullptr) {
  auto spot__ = spot ? _fbb.CreateVector<flatbuffers::Offset<hikyuu::flat::Spot>>(*spot) : 0;
  return hikyuu::flat::CreateSpotList(
      _fbb,
      spot__);
}

inline const hikyuu::flat::SpotList *GetSpotList(const void *buf) {
  return flatbuffers::GetRoot<hikyuu::flat::SpotList>(buf);
}

inline const hikyuu::flat::SpotList *GetSizePrefixedSpotList(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<hikyuu::flat::SpotList>(buf);
}

inline bool VerifySpotListBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<hikyuu::flat::SpotList>(nullptr);
}

inline bool VerifySizePrefixedSpotListBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<hikyuu::flat::SpotList>(nullptr);
}

inline void FinishSpotListBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<hikyuu::flat::SpotList> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedSpotListBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<hikyuu::flat::SpotList> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace flat
}  // namespace hikyuu

#endif  // FLATBUFFERS_GENERATED_SPOT_HIKYUU_FLAT_H_
