// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeaccountauditconfigurationrequest.h"
#include "describeaccountauditconfigurationrequest_p.h"
#include "describeaccountauditconfigurationresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DescribeAccountAuditConfigurationRequest
 * \brief The DescribeAccountAuditConfigurationRequest class provides an interface for IoT DescribeAccountAuditConfiguration requests.
 *
 * \inmodule QtAwsIoT
 *
 *  <fullname>IoT</fullname>
 * 
 *  IoT provides secure, bi-directional communication between Internet-connected devices (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the Amazon Web Services cloud. You can discover your custom IoT-Data endpoint
 *  to communicate with, configure rules for data processing and integration with other services, organize resources
 *  associated with each device (Registry), configure logging, and create and manage policies and credentials to
 *  authenticate
 * 
 *  devices>
 * 
 *  The service endpoints that expose this API are listed in <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/iot-core.html">Amazon Web Services IoT Core Endpoints and
 *  Quotas</a>. You must use the endpoint for the region that has the resources you want to
 * 
 *  access>
 * 
 *  The service name used by <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Amazon Web
 *  Services Signature Version 4</a> to sign the request is:
 * 
 *  <i>execute-api</i>>
 * 
 *  For more information about how IoT works, see the <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 * 
 *  Guide</a>>
 * 
 *  For information about how to use the credentials provider for IoT, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/authorizing-direct-aws.html">Authorizing Direct Calls to
 *  Amazon Web Services
 *
 * \sa IoTClient::describeAccountAuditConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAccountAuditConfigurationRequest::DescribeAccountAuditConfigurationRequest(const DescribeAccountAuditConfigurationRequest &other)
    : IoTRequest(new DescribeAccountAuditConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAccountAuditConfigurationRequest object.
 */
DescribeAccountAuditConfigurationRequest::DescribeAccountAuditConfigurationRequest()
    : IoTRequest(new DescribeAccountAuditConfigurationRequestPrivate(IoTRequest::DescribeAccountAuditConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAccountAuditConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAccountAuditConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAccountAuditConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAccountAuditConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::DescribeAccountAuditConfigurationRequestPrivate
 * \brief The DescribeAccountAuditConfigurationRequestPrivate class provides private implementation for DescribeAccountAuditConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a DescribeAccountAuditConfigurationRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
DescribeAccountAuditConfigurationRequestPrivate::DescribeAccountAuditConfigurationRequestPrivate(
    const IoTRequest::Action action, DescribeAccountAuditConfigurationRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAccountAuditConfigurationRequest
 * class' copy constructor.
 */
DescribeAccountAuditConfigurationRequestPrivate::DescribeAccountAuditConfigurationRequestPrivate(
    const DescribeAccountAuditConfigurationRequestPrivate &other, DescribeAccountAuditConfigurationRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
