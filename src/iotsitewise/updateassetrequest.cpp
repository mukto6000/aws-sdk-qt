// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateassetrequest.h"
#include "updateassetrequest_p.h"
#include "updateassetresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::UpdateAssetRequest
 * \brief The UpdateAssetRequest class provides an interface for IoTSiteWise UpdateAsset requests.
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
 * \sa IoTSiteWiseClient::updateAsset
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAssetRequest::UpdateAssetRequest(const UpdateAssetRequest &other)
    : IoTSiteWiseRequest(new UpdateAssetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAssetRequest object.
 */
UpdateAssetRequest::UpdateAssetRequest()
    : IoTSiteWiseRequest(new UpdateAssetRequestPrivate(IoTSiteWiseRequest::UpdateAssetAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAssetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAssetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAssetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAssetResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::UpdateAssetRequestPrivate
 * \brief The UpdateAssetRequestPrivate class provides private implementation for UpdateAssetRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a UpdateAssetRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
UpdateAssetRequestPrivate::UpdateAssetRequestPrivate(
    const IoTSiteWiseRequest::Action action, UpdateAssetRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAssetRequest
 * class' copy constructor.
 */
UpdateAssetRequestPrivate::UpdateAssetRequestPrivate(
    const UpdateAssetRequestPrivate &other, UpdateAssetRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
