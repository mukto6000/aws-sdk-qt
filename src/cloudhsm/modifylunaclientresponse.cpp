// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifylunaclientresponse.h"
#include "modifylunaclientresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::ModifyLunaClientResponse
 * \brief The ModifyLunaClientResponse class provides an interace for CloudHsm ModifyLunaClient responses.
 *
 * \inmodule QtAwsCloudHsm
 *
 *  <fullname>AWS CloudHSM Service</fullname>
 * 
 *  This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 *  href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 * 
 *  Reference</a>>
 * 
 *  <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 *  CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 *  <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * \sa CloudHsmClient::modifyLunaClient
 */

/*!
 * Constructs a ModifyLunaClientResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyLunaClientResponse::ModifyLunaClientResponse(
        const ModifyLunaClientRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHsmResponse(new ModifyLunaClientResponsePrivate(this), parent)
{
    setRequest(new ModifyLunaClientRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyLunaClientRequest * ModifyLunaClientResponse::request() const
{
    Q_D(const ModifyLunaClientResponse);
    return static_cast<const ModifyLunaClientRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHsm ModifyLunaClient \a response.
 */
void ModifyLunaClientResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyLunaClientResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHsm::ModifyLunaClientResponsePrivate
 * \brief The ModifyLunaClientResponsePrivate class provides private implementation for ModifyLunaClientResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a ModifyLunaClientResponsePrivate object with public implementation \a q.
 */
ModifyLunaClientResponsePrivate::ModifyLunaClientResponsePrivate(
    ModifyLunaClientResponse * const q) : CloudHsmResponsePrivate(q)
{

}

/*!
 * Parses a CloudHsm ModifyLunaClient response element from \a xml.
 */
void ModifyLunaClientResponsePrivate::parseModifyLunaClientResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyLunaClientResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHsm
} // namespace QtAws
