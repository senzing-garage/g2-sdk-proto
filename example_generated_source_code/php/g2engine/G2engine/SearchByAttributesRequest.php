<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: g2engine.proto

namespace G2engine;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Generated from protobuf message <code>g2engine.SearchByAttributesRequest</code>
 */
class SearchByAttributesRequest extends \Google\Protobuf\Internal\Message
{
    /**
     * Generated from protobuf field <code>string jsonData = 1;</code>
     */
    protected $jsonData = '';

    /**
     * Constructor.
     *
     * @param array $data {
     *     Optional. Data for populating the Message object.
     *
     *     @type string $jsonData
     * }
     */
    public function __construct($data = NULL) {
        \GPBMetadata\G2Engine::initOnce();
        parent::__construct($data);
    }

    /**
     * Generated from protobuf field <code>string jsonData = 1;</code>
     * @return string
     */
    public function getJsonData()
    {
        return $this->jsonData;
    }

    /**
     * Generated from protobuf field <code>string jsonData = 1;</code>
     * @param string $var
     * @return $this
     */
    public function setJsonData($var)
    {
        GPBUtil::checkString($var, True);
        $this->jsonData = $var;

        return $this;
    }

}

