<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: g2diagnostic.proto

namespace G2diagnostic;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Generated from protobuf message <code>g2diagnostic.GetFeatureRequest</code>
 */
class GetFeatureRequest extends \Google\Protobuf\Internal\Message
{
    /**
     * Generated from protobuf field <code>int64 libFeatID = 1;</code>
     */
    protected $libFeatID = 0;

    /**
     * Constructor.
     *
     * @param array $data {
     *     Optional. Data for populating the Message object.
     *
     *     @type int|string $libFeatID
     * }
     */
    public function __construct($data = NULL) {
        \GPBMetadata\G2Diagnostic::initOnce();
        parent::__construct($data);
    }

    /**
     * Generated from protobuf field <code>int64 libFeatID = 1;</code>
     * @return int|string
     */
    public function getLibFeatID()
    {
        return $this->libFeatID;
    }

    /**
     * Generated from protobuf field <code>int64 libFeatID = 1;</code>
     * @param int|string $var
     * @return $this
     */
    public function setLibFeatID($var)
    {
        GPBUtil::checkInt64($var);
        $this->libFeatID = $var;

        return $this;
    }

}
