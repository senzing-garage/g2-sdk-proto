<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: g2engine.proto

namespace G2engine;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Generated from protobuf message <code>g2engine.GetEntityByEntityIDRequest</code>
 */
class GetEntityByEntityIDRequest extends \Google\Protobuf\Internal\Message
{
    /**
     * Generated from protobuf field <code>int64 entityID = 1;</code>
     */
    protected $entityID = 0;

    /**
     * Constructor.
     *
     * @param array $data {
     *     Optional. Data for populating the Message object.
     *
     *     @type int|string $entityID
     * }
     */
    public function __construct($data = NULL) {
        \GPBMetadata\G2Engine::initOnce();
        parent::__construct($data);
    }

    /**
     * Generated from protobuf field <code>int64 entityID = 1;</code>
     * @return int|string
     */
    public function getEntityID()
    {
        return $this->entityID;
    }

    /**
     * Generated from protobuf field <code>int64 entityID = 1;</code>
     * @param int|string $var
     * @return $this
     */
    public function setEntityID($var)
    {
        GPBUtil::checkInt64($var);
        $this->entityID = $var;

        return $this;
    }

}

