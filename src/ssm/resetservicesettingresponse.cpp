// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resetservicesettingresponse.h"
#include "resetservicesettingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ssm {

/*!
 * \class QtAws::Ssm::ResetServiceSettingResponse
 * \brief The ResetServiceSettingResponse class provides an interace for Ssm ResetServiceSetting responses.
 *
 * \inmodule QtAwsSsm
 *
 *  Amazon Web Services Systems Manager is a collection of capabilities to help you manage your applications and
 *  infrastructure running in the Amazon Web Services Cloud;. Systems Manager simplifies application and resource
 *  management, shortens the time to detect and resolve operational problems, and helps you manage your Amazon Web Services
 *  resources securely at
 * 
 *  scale>
 * 
 *  This reference is intended to be used with the <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/">Amazon Web Services Systems Manager User
 * 
 *  Guide</a>>
 * 
 *  To get started, verify prerequisites. For more information, see <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Setting up Amazon
 *  Web Services Systems
 * 
 *  Manager</a>> <p class="title"> <b>Related resources</b>
 * 
 *  </p <ul> <li>
 * 
 *  For information about how to use a Query API, see <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API requests</a>.
 * 
 *  </p </li> <li>
 * 
 *  For information about other API operations you can perform on EC2 instances, see the <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about AppConfig, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/appconfig/latest/userguide/">AppConfig User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/">AppConfig API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about Incident Manager, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/userguide/">Incident Manager User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/APIReference/">Incident Manager API
 *
 * \sa SsmClient::resetServiceSetting
 */

/*!
 * Constructs a ResetServiceSettingResponse object for \a reply to \a request, with parent \a parent.
 */
ResetServiceSettingResponse::ResetServiceSettingResponse(
        const ResetServiceSettingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmResponse(new ResetServiceSettingResponsePrivate(this), parent)
{
    setRequest(new ResetServiceSettingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResetServiceSettingRequest * ResetServiceSettingResponse::request() const
{
    Q_D(const ResetServiceSettingResponse);
    return static_cast<const ResetServiceSettingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ssm ResetServiceSetting \a response.
 */
void ResetServiceSettingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResetServiceSettingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ssm::ResetServiceSettingResponsePrivate
 * \brief The ResetServiceSettingResponsePrivate class provides private implementation for ResetServiceSettingResponse.
 * \internal
 *
 * \inmodule QtAwsSsm
 */

/*!
 * Constructs a ResetServiceSettingResponsePrivate object with public implementation \a q.
 */
ResetServiceSettingResponsePrivate::ResetServiceSettingResponsePrivate(
    ResetServiceSettingResponse * const q) : SsmResponsePrivate(q)
{

}

/*!
 * Parses a Ssm ResetServiceSetting response element from \a xml.
 */
void ResetServiceSettingResponsePrivate::parseResetServiceSettingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetServiceSettingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ssm
} // namespace QtAws
