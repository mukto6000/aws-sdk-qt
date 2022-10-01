/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteassetmodelrequest.h"
#include "deleteassetmodelrequest_p.h"
#include "deleteassetmodelresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DeleteAssetModelRequest
 * \brief The DeleteAssetModelRequest class provides an interface for IoTSiteWise DeleteAssetModel requests.
 *
 * \inmodule QtAwsIoTSiteWise
 *
 *  Welcome to the IoT SiteWise API Reference. IoT SiteWise is an Amazon Web Services service that connects <a
 *  href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">Industrial Internet of Things (IIoT)</a>
 *  devices to the power of the Amazon Web Services Cloud. For more information, see the <a
 *  href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/">IoT SiteWise User Guide</a>. For information about IoT
 *  SiteWise quotas, see <a href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a> in the
 *  <i>IoT SiteWise User
 *
 * \sa IoTSiteWiseClient::deleteAssetModel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAssetModelRequest::DeleteAssetModelRequest(const DeleteAssetModelRequest &other)
    : IoTSiteWiseRequest(new DeleteAssetModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAssetModelRequest object.
 */
DeleteAssetModelRequest::DeleteAssetModelRequest()
    : IoTSiteWiseRequest(new DeleteAssetModelRequestPrivate(IoTSiteWiseRequest::DeleteAssetModelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAssetModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAssetModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAssetModelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAssetModelResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::DeleteAssetModelRequestPrivate
 * \brief The DeleteAssetModelRequestPrivate class provides private implementation for DeleteAssetModelRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DeleteAssetModelRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
DeleteAssetModelRequestPrivate::DeleteAssetModelRequestPrivate(
    const IoTSiteWiseRequest::Action action, DeleteAssetModelRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAssetModelRequest
 * class' copy constructor.
 */
DeleteAssetModelRequestPrivate::DeleteAssetModelRequestPrivate(
    const DeleteAssetModelRequestPrivate &other, DeleteAssetModelRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
