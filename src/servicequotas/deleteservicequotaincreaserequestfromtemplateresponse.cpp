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

#include "deleteservicequotaincreaserequestfromtemplateresponse.h"
#include "deleteservicequotaincreaserequestfromtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::DeleteServiceQuotaIncreaseRequestFromTemplateResponse
 * \brief The DeleteServiceQuotaIncreaseRequestFromTemplateResponse class provides an interace for ServiceQuotas DeleteServiceQuotaIncreaseRequestFromTemplate responses.
 *
 * \inmodule QtAwsServiceQuotas
 *
 *  With Service Quotas, you can view and manage your quotas easily as your AWS workloads grow. Quotas, also referred to as
 *  limits, are the maximum number of resources that you can create in your AWS account. For more information, see the <a
 *  href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service Quotas User
 *
 * \sa ServiceQuotasClient::deleteServiceQuotaIncreaseRequestFromTemplate
 */

/*!
 * Constructs a DeleteServiceQuotaIncreaseRequestFromTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteServiceQuotaIncreaseRequestFromTemplateResponse::DeleteServiceQuotaIncreaseRequestFromTemplateResponse(
        const DeleteServiceQuotaIncreaseRequestFromTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceQuotasResponse(new DeleteServiceQuotaIncreaseRequestFromTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteServiceQuotaIncreaseRequestFromTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteServiceQuotaIncreaseRequestFromTemplateRequest * DeleteServiceQuotaIncreaseRequestFromTemplateResponse::request() const
{
    return static_cast<const DeleteServiceQuotaIncreaseRequestFromTemplateRequest *>(ServiceQuotasResponse::request());
}

/*!
 * \reimp
 * Parses a successful ServiceQuotas DeleteServiceQuotaIncreaseRequestFromTemplate \a response.
 */
void DeleteServiceQuotaIncreaseRequestFromTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteServiceQuotaIncreaseRequestFromTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceQuotas::DeleteServiceQuotaIncreaseRequestFromTemplateResponsePrivate
 * \brief The DeleteServiceQuotaIncreaseRequestFromTemplateResponsePrivate class provides private implementation for DeleteServiceQuotaIncreaseRequestFromTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a DeleteServiceQuotaIncreaseRequestFromTemplateResponsePrivate object with public implementation \a q.
 */
DeleteServiceQuotaIncreaseRequestFromTemplateResponsePrivate::DeleteServiceQuotaIncreaseRequestFromTemplateResponsePrivate(
    DeleteServiceQuotaIncreaseRequestFromTemplateResponse * const q) : ServiceQuotasResponsePrivate(q)
{

}

/*!
 * Parses a ServiceQuotas DeleteServiceQuotaIncreaseRequestFromTemplate response element from \a xml.
 */
void DeleteServiceQuotaIncreaseRequestFromTemplateResponsePrivate::parseDeleteServiceQuotaIncreaseRequestFromTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteServiceQuotaIncreaseRequestFromTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceQuotas
} // namespace QtAws
