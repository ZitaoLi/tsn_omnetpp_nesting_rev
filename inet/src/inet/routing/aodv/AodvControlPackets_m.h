//
// Generated file, do not edit! Created by nedtool 5.4 from inet/routing/aodv/AodvControlPackets.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __INET__AODV_AODVCONTROLPACKETS_M_H
#define __INET__AODV_AODVCONTROLPACKETS_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0504
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// dll export symbol
#ifndef INET_API
#  if defined(INET_EXPORT)
#    define INET_API  OPP_DLLEXPORT
#  elif defined(INET_IMPORT)
#    define INET_API  OPP_DLLIMPORT
#  else
#    define INET_API
#  endif
#endif


namespace inet {
namespace aodv {

struct UnreachableNode;
class AodvControlPacket;
class Rreq;
class Rrep;
class Rerr;
class RrepAck;
class WaitForRrep;
} // namespace aodv
} // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/packet/chunk/Chunk_m.h" // import inet.common.packet.chunk.Chunk

#include "inet/networklayer/common/L3Address_m.h" // import inet.networklayer.common.L3Address


namespace inet {
namespace aodv {

/**
 * Struct generated from inet/routing/aodv/AodvControlPackets.msg:29 by nedtool.
 */
struct INET_API UnreachableNode
{
    UnreachableNode();
    L3Address addr;
    unsigned int seqNum;
};

// helpers for local use
void INET_API __doPacking(omnetpp::cCommBuffer *b, const UnreachableNode& a);
void INET_API __doUnpacking(omnetpp::cCommBuffer *b, UnreachableNode& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const UnreachableNode& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, UnreachableNode& obj) { __doUnpacking(b, obj); }

/**
 * Enum generated from <tt>inet/routing/aodv/AodvControlPackets.msg:35</tt> by nedtool.
 * <pre>
 * enum AodvControlPacketType
 * {
 *     RREQ = 1;
 *     RREP = 2;
 *     RERR = 3;
 *     RREPACK = 4;
 * }
 * </pre>
 */
enum AodvControlPacketType {
    RREQ = 1,
    RREP = 2,
    RERR = 3,
    RREPACK = 4
};

/**
 * Class generated from <tt>inet/routing/aodv/AodvControlPackets.msg:46</tt> by nedtool.
 * <pre>
 * //
 * // Base packet for AODV Control Packets
 * //
 * class AodvControlPacket extends FieldsChunk
 * {
 *     unsigned int packetType;
 * }
 * </pre>
 */
class INET_API AodvControlPacket : public ::inet::FieldsChunk
{
  protected:
    unsigned int packetType = 0;

  private:
    void copy(const AodvControlPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AodvControlPacket&);

  public:
    AodvControlPacket();
    AodvControlPacket(const AodvControlPacket& other);
    virtual ~AodvControlPacket();
    AodvControlPacket& operator=(const AodvControlPacket& other);
    virtual AodvControlPacket *dup() const override {return new AodvControlPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual unsigned int getPacketType() const;
    virtual void setPacketType(unsigned int packetType);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const AodvControlPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, AodvControlPacket& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/aodv/AodvControlPackets.msg:54</tt> by nedtool.
 * <pre>
 * //
 * // Represents an AODV Route Request
 * //
 * class Rreq extends AodvControlPacket
 * {
 *     packetType = RREQ;
 *     bool joinFlag;
 *     bool repairFlag;
 *     bool gratuitousRREPFlag;
 *     bool destOnlyFlag;
 *     bool unknownSeqNumFlag;
 *     unsigned int hopCount;
 *     unsigned int rreqId;
 *     L3Address destAddr;
 *     unsigned int destSeqNum;
 *     L3Address originatorAddr;
 *     unsigned int originatorSeqNum;
 * }
 * </pre>
 */
class INET_API Rreq : public ::inet::aodv::AodvControlPacket
{
  protected:
    bool joinFlag = false;
    bool repairFlag = false;
    bool gratuitousRREPFlag = false;
    bool destOnlyFlag = false;
    bool unknownSeqNumFlag = false;
    unsigned int hopCount = 0;
    unsigned int rreqId = 0;
    L3Address destAddr;
    unsigned int destSeqNum = 0;
    L3Address originatorAddr;
    unsigned int originatorSeqNum = 0;

  private:
    void copy(const Rreq& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Rreq&);

  public:
    Rreq();
    Rreq(const Rreq& other);
    virtual ~Rreq();
    Rreq& operator=(const Rreq& other);
    virtual Rreq *dup() const override {return new Rreq(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual bool getJoinFlag() const;
    virtual void setJoinFlag(bool joinFlag);
    virtual bool getRepairFlag() const;
    virtual void setRepairFlag(bool repairFlag);
    virtual bool getGratuitousRREPFlag() const;
    virtual void setGratuitousRREPFlag(bool gratuitousRREPFlag);
    virtual bool getDestOnlyFlag() const;
    virtual void setDestOnlyFlag(bool destOnlyFlag);
    virtual bool getUnknownSeqNumFlag() const;
    virtual void setUnknownSeqNumFlag(bool unknownSeqNumFlag);
    virtual unsigned int getHopCount() const;
    virtual void setHopCount(unsigned int hopCount);
    virtual unsigned int getRreqId() const;
    virtual void setRreqId(unsigned int rreqId);
    virtual const L3Address& getDestAddr() const;
    virtual L3Address& getDestAddrForUpdate() { handleChange();return const_cast<L3Address&>(const_cast<Rreq*>(this)->getDestAddr());}
    virtual void setDestAddr(const L3Address& destAddr);
    virtual unsigned int getDestSeqNum() const;
    virtual void setDestSeqNum(unsigned int destSeqNum);
    virtual const L3Address& getOriginatorAddr() const;
    virtual L3Address& getOriginatorAddrForUpdate() { handleChange();return const_cast<L3Address&>(const_cast<Rreq*>(this)->getOriginatorAddr());}
    virtual void setOriginatorAddr(const L3Address& originatorAddr);
    virtual unsigned int getOriginatorSeqNum() const;
    virtual void setOriginatorSeqNum(unsigned int originatorSeqNum);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Rreq& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Rreq& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/aodv/AodvControlPackets.msg:73</tt> by nedtool.
 * <pre>
 * //
 * // Represents an AODV Route Reply
 * //
 * class Rrep extends AodvControlPacket
 * {
 *     packetType = RREP;
 *     bool repairFlag;
 *     bool ackRequiredFlag;
 *     unsigned int prefixSize;
 *     unsigned int hopCount;
 *     L3Address destAddr;
 *     unsigned int destSeqNum;
 *     L3Address originatorAddr;
 *     unsigned int originatorSeqNum;
 *     simtime_t lifeTime;
 * }
 * </pre>
 */
class INET_API Rrep : public ::inet::aodv::AodvControlPacket
{
  protected:
    bool repairFlag = false;
    bool ackRequiredFlag = false;
    unsigned int prefixSize = 0;
    unsigned int hopCount = 0;
    L3Address destAddr;
    unsigned int destSeqNum = 0;
    L3Address originatorAddr;
    unsigned int originatorSeqNum = 0;
    omnetpp::simtime_t lifeTime = SIMTIME_ZERO;

  private:
    void copy(const Rrep& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Rrep&);

  public:
    Rrep();
    Rrep(const Rrep& other);
    virtual ~Rrep();
    Rrep& operator=(const Rrep& other);
    virtual Rrep *dup() const override {return new Rrep(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual bool getRepairFlag() const;
    virtual void setRepairFlag(bool repairFlag);
    virtual bool getAckRequiredFlag() const;
    virtual void setAckRequiredFlag(bool ackRequiredFlag);
    virtual unsigned int getPrefixSize() const;
    virtual void setPrefixSize(unsigned int prefixSize);
    virtual unsigned int getHopCount() const;
    virtual void setHopCount(unsigned int hopCount);
    virtual const L3Address& getDestAddr() const;
    virtual L3Address& getDestAddrForUpdate() { handleChange();return const_cast<L3Address&>(const_cast<Rrep*>(this)->getDestAddr());}
    virtual void setDestAddr(const L3Address& destAddr);
    virtual unsigned int getDestSeqNum() const;
    virtual void setDestSeqNum(unsigned int destSeqNum);
    virtual const L3Address& getOriginatorAddr() const;
    virtual L3Address& getOriginatorAddrForUpdate() { handleChange();return const_cast<L3Address&>(const_cast<Rrep*>(this)->getOriginatorAddr());}
    virtual void setOriginatorAddr(const L3Address& originatorAddr);
    virtual unsigned int getOriginatorSeqNum() const;
    virtual void setOriginatorSeqNum(unsigned int originatorSeqNum);
    virtual omnetpp::simtime_t getLifeTime() const;
    virtual void setLifeTime(omnetpp::simtime_t lifeTime);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Rrep& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Rrep& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/aodv/AodvControlPackets.msg:90</tt> by nedtool.
 * <pre>
 * //
 * // Represents an AODV Route Error
 * //
 * class Rerr extends AodvControlPacket
 * {
 *     packetType = RERR;
 *     UnreachableNode unreachableNodes[];
 *     bool noDeleteFlag;
 *     unsigned int destCount;
 * }
 * </pre>
 */
class INET_API Rerr : public ::inet::aodv::AodvControlPacket
{
  protected:
    UnreachableNode *unreachableNodes = nullptr;
    size_t unreachableNodes_arraysize = 0;
    bool noDeleteFlag = false;
    unsigned int destCount = 0;

  private:
    void copy(const Rerr& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Rerr&);

  public:
    Rerr();
    Rerr(const Rerr& other);
    virtual ~Rerr();
    Rerr& operator=(const Rerr& other);
    virtual Rerr *dup() const override {return new Rerr(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual void setUnreachableNodesArraySize(size_t size);
    virtual size_t getUnreachableNodesArraySize() const;
    virtual const UnreachableNode& getUnreachableNodes(size_t k) const;
    virtual UnreachableNode& getUnreachableNodesForUpdate(size_t k) { handleChange();return const_cast<UnreachableNode&>(const_cast<Rerr*>(this)->getUnreachableNodes(k));}
    virtual void setUnreachableNodes(size_t k, const UnreachableNode& unreachableNodes);
    virtual void insertUnreachableNodes(const UnreachableNode& unreachableNodes);
    virtual void insertUnreachableNodes(size_t k, const UnreachableNode& unreachableNodes);
    virtual void eraseUnreachableNodes(size_t k);
    virtual bool getNoDeleteFlag() const;
    virtual void setNoDeleteFlag(bool noDeleteFlag);
    virtual unsigned int getDestCount() const;
    virtual void setDestCount(unsigned int destCount);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Rerr& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Rerr& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/aodv/AodvControlPackets.msg:101</tt> by nedtool.
 * <pre>
 * //
 * // Represents an AODV Route Reply ACK
 * //
 * class RrepAck extends AodvControlPacket
 * {
 *     packetType = RREPACK;
 * }
 * </pre>
 */
class INET_API RrepAck : public ::inet::aodv::AodvControlPacket
{
  protected:

  private:
    void copy(const RrepAck& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RrepAck&);

  public:
    RrepAck();
    RrepAck(const RrepAck& other);
    virtual ~RrepAck();
    RrepAck& operator=(const RrepAck& other);
    virtual RrepAck *dup() const override {return new RrepAck(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const RrepAck& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, RrepAck& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/aodv/AodvControlPackets.msg:109</tt> by nedtool.
 * <pre>
 * //
 * // Represents a timer for a Route Reply packet
 * //
 * message WaitForRrep
 * {
 *     L3Address destAddr;
 *     unsigned int lastTTL;
 *     bool fromInvalidEntry;
 * }
 * </pre>
 */
class INET_API WaitForRrep : public ::omnetpp::cMessage
{
  protected:
    L3Address destAddr;
    unsigned int lastTTL = 0;
    bool fromInvalidEntry = false;

  private:
    void copy(const WaitForRrep& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const WaitForRrep&);

  public:
    WaitForRrep(const char *name=nullptr, short kind=0);
    WaitForRrep(const WaitForRrep& other);
    virtual ~WaitForRrep();
    WaitForRrep& operator=(const WaitForRrep& other);
    virtual WaitForRrep *dup() const override {return new WaitForRrep(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual const L3Address& getDestAddr() const;
    virtual L3Address& getDestAddrForUpdate() { return const_cast<L3Address&>(const_cast<WaitForRrep*>(this)->getDestAddr());}
    virtual void setDestAddr(const L3Address& destAddr);
    virtual unsigned int getLastTTL() const;
    virtual void setLastTTL(unsigned int lastTTL);
    virtual bool getFromInvalidEntry() const;
    virtual void setFromInvalidEntry(bool fromInvalidEntry);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const WaitForRrep& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, WaitForRrep& obj) {obj.parsimUnpack(b);}

} // namespace aodv
} // namespace inet

#endif // ifndef __INET__AODV_AODVCONTROLPACKETS_M_H

