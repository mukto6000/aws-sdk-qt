// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsuitedefinitionrequest.h"
#include "createsuitedefinitionrequest_p.h"
#include "createsuitedefinitionresponse.h"
#include "iotdeviceadvisorrequest_p.h"

namespace QtAws {
namespace IotDeviceAdvisor {

/*!
 * \class QtAws::IotDeviceAdvisor::CreateSuiteDefinitionRequest
 * \brief The CreateSuiteDefinitionRequest class provides an interface for IotDeviceAdvisor CreateSuiteDefinition requests.
 *
 * \inmodule QtAwsIotDeviceAdvisor
 *
 *  Amazon Web Services IoT Core Device Advisor is a cloud-based, fully managed test capability for validating IoT devices
 *  during device software development. Device Advisor provides pre-built tests that you can use to validate IoT devices for
 *  reliable and secure connectivity with Amazon Web Services IoT Core before deploying devices to production. By using
 *  Device Advisor, you can confirm that your devices can connect to Amazon Web Services IoT Core, follow security best
 *  practices and, if applicable, receive software updates from IoT Device Management. You can also download signed
 *  qualification reports to submit to the Amazon Web Services Partner Network to get your device qualified for the Amazon
 *  Web Services Partner Device Catalog without the need to send your device in and wait for it to be
 *
 * \sa IotDeviceAdvisorClient::createSuiteDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSuiteDefinitionRequest::CreateSuiteDefinitionRequest(const CreateSuiteDefinitionRequest &other)
    : IotDeviceAdvisorRequest(new CreateSuiteDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSuiteDefinitionRequest object.
 */
CreateSuiteDefinitionRequest::CreateSuiteDefinitionRequest()
    : IotDeviceAdvisorRequest(new CreateSuiteDefinitionRequestPrivate(IotDeviceAdvisorRequest::CreateSuiteDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSuiteDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSuiteDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSuiteDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new CreateSuiteDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::IotDeviceAdvisor::CreateSuiteDefinitionRequestPrivate
 * \brief The CreateSuiteDefinitionRequestPrivate class provides private implementation for CreateSuiteDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsIotDeviceAdvisor
 */

/*!
 * Constructs a CreateSuiteDefinitionRequestPrivate object for IotDeviceAdvisor \a action,
 * with public implementation \a q.
 */
CreateSuiteDefinitionRequestPrivate::CreateSuiteDefinitionRequestPrivate(
    const IotDeviceAdvisorRequest::Action action, CreateSuiteDefinitionRequest * const q)
    : IotDeviceAdvisorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSuiteDefinitionRequest
 * class' copy constructor.
 */
CreateSuiteDefinitionRequestPrivate::CreateSuiteDefinitionRequestPrivate(
    const CreateSuiteDefinitionRequestPrivate &other, CreateSuiteDefinitionRequest * const q)
    : IotDeviceAdvisorRequestPrivate(other, q)
{

}

} // namespace IotDeviceAdvisor
} // namespace QtAws
